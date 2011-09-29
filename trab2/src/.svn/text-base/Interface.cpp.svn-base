#include "Interface.h"
#include <QDebug>
#include <math.h>
#include <QLineF>
#include <QPolygonF>

Interface::Interface()
{
    minX = INF;
    minY = INF;
    maxX = -INF;
    maxY = -INF;
    faceExterna = NULL;
    kdt = NULL;
}

bool Interface::isExterna(Face* f)
{
    return (f == faceExterna);
}

QList<QPair<QPointF, QPointF> > Interface::getTodasArestas()
{
    return map.keys();
}

void Interface::addFace(QVector<QPointF> in)
{
    Face *f = new Face();
    HalfEdge *ant = NULL;
    HalfEdge *first, *twin;

    for(int i = 0; i < in.size(); i++)
    {
        HalfEdge *e = new HalfEdge();
        if (i == 0)     first = e;

        map[qMakePair(in[i], in[(i+1)%in.size()])] = e;
        twin = findTwin(in[(i+1)%in.size()],in[i]);

        minX = MIN(minX, in[i].x());
        maxX = MAX(maxX, in[i].x());
        minY = MIN(minY, in[i].y());
        maxY = MAX(maxY, in[i].y());

        Vertex *v = addVertex(in[i]);
        v->setEdge(e);
        e->setOrigem(v);

        e->setFace(f);

        e->setAnt(ant);
        if (ant!= NULL)
        {
            ant->setProx(e);
        }

        e->setTwin(twin);
        if (twin!= NULL)
        {
            twin->setTwin(e);
        }

        ant = e;
    }

    first->setAnt(ant);
    ant->setProx(first);

    f->setOuterComp(first);

    faces.push_back(f);
}

Vertex* Interface::addVertex(QPointF p)
{
    QMap<QPointF,Vertex*>::iterator it;

    it = vertices.find(p);
    if (it == vertices.end())
    {
        Vertex *v = new Vertex(p);
        vertices[p] = v;

        return v;
    }

    return it.value();
}

HalfEdge* Interface::findTwin(QPointF u, QPointF v)
{
    QMap<QPair<QPointF, QPointF>, HalfEdge*>::iterator it;

    it = map.find(qMakePair(u,v));
    if(it != map.end())
    {
        return it.value();
    }

    return NULL;
}

void Interface::adicionaface(HalfEdge* e, Face* f)
{
    HalfEdge *ori = e;
    HalfEdge *ant = NULL;
    HalfEdge *nova = NULL;
    HalfEdge *first;
    bool sai = false;

    nova = new HalfEdge();

    nova->setFace(f);
    nova->setTwin(ori);
    ori->setTwin(nova);
    nova->setOrigem(ori->getDestino());
    f->setOuterComp(nova);
    ant = nova;
    first = nova;

    ori = ori->getProx();
    while(true)
    {
        while(ori->getTwin() != NULL)
        {
            if(ori == e)
            {
                sai = true;
                break;
            }
            ori = ori->getTwin()->getProx();
        }

        if(sai)
            break;

        nova = new HalfEdge();

        nova->setFace(f);
        nova->setTwin(ori);
        ori->setTwin(nova);
        nova->setProx(ant);
        ant->setAnt(nova);
        nova->setOrigem(ori->getDestino());

        ori = ori->getProx();

        ant = nova;
    }

    ori->getTwin()->setProx(ant);
    ant->setAnt(ori->getTwin());
}

void Interface::addExtEdges(void)
{
    if(faceExterna == NULL)
        faceExterna = new Face();

    QList<HalfEdge *> lista = map.values();

    for(int i = 0; i < lista.size(); ++i)
    {
        if(lista[i]->getTwin() == NULL)
        {
            adicionaface(lista[i], faceExterna);
            componentesFaceExterna.push_back(lista[i]);
        }
    }
    QRectF rect;
    rect.setBottom(maxY);
    rect.setTop(minY);
    rect.setLeft(minX);
    rect.setRight(maxX);

    kdt = new KDTree(map.values(),rect);
}

HalfEdge* Interface::getArestaNear(QPointF p)
{
    QList<HalfEdge *> *lista = new QList<HalfEdge *>(map.values());
    //QList<HalfEdge *> *lista = kdt->find(p);

    HalfEdge *e, *best = NULL;
    QPointF p1, p2;
    double min = INF;

    double realdist2;

    for (int i = 0; i < lista->size(); i++)
    {
        e = lista->at(i);

        p1 = e->getOrigem()->getPoint();
        p2 = e->getDestino()->getPoint();

        double mod2 = modulo2(p1,p2);

        double u = ((p.x() - p1.x())*(p2.x() - p1.x())) + ((p.y() - p1.y())*(p2.y() - p1.y()));
        u = u / mod2;

        double x = p1.x() + u * (p2.x() - p1.x());
        double y = p1.y() + u * (p2.y() - p1.y());

        double dist2 = (p.x() - x)*(p.x() - x) + (p.y() - y)*(p.y() - y);

        QPointF dir = (p2 - p1)/sqrt(mod2);

        QPointF AP = p - p1;
        QPointF AB = p2 - p1;

        double proj = eProd(AP,dir);

        if (proj < 0 || proj >= sqrt(mod2))
        {
            double dist2p1 = (p1.x()-p.x())*(p1.x()-p.x()) + (p1.y()-p.y())*(p1.y()-p.y());
            double dist2p2 = (p2.x()-p.x())*(p2.x()-p.x()) + (p2.y()-p.y())*(p2.y()-p.y());

            realdist2 = MIN(dist2p1,dist2p2);
        }
        else
            realdist2 = dist2;


        if (realdist2 < min)
        {
            min = realdist2;
            best = e;
        }

    }

    delete lista;

    return best;
}
Face* Interface::getFaceNear(QPointF p)
{
    HalfEdge *min = getArestaNear(p);

    if(isExterna(min->getFace()))
        min = min->getTwin();

    if(dentroFace(min,p))
        return min->getFace();

    if(isExterna(min->getTwin()->getFace()) || dentroFace(min->getTwin(),p))
        return min->getTwin()->getFace();

    return NULL;
}

Vertex* Interface::getVerticeNear(QPointF p)
{
    QList<HalfEdge *> *lista = new QList<HalfEdge *>(map.values());
    //QList<HalfEdge *> *lista = kdt->find(p);
    Vertex* menor = NULL;
    double distMenor = INF;
    double dist;
    QPointF ponto;

    for(int it = 0; it < lista->size(); ++it)
    {
        ponto = lista->operator [](it)->getOrigem()->getPoint();
        dist = sqrt((p.x()-ponto.x())*(p.x()-ponto.x()) + (p.y()-ponto.y())*(p.y()-ponto.y()));
        if(dist < distMenor)
        {
            distMenor = dist;
            menor = lista->operator [](it)->getOrigem();
        }

        ponto = lista->operator [](it)->getDestino()->getPoint();
        dist = sqrt((p.x()-ponto.x())*(p.x()-ponto.x()) + (p.y()-ponto.y())*(p.y()-ponto.y()));
        if(dist < distMenor)
        {
            distMenor = dist;
            menor = lista->operator [](it)->getDestino();
        }
    }

    return menor;
}

bool Interface::dentroFace(HalfEdge* h, QPointF p)
{
    HalfEdge::iterator it;
    QVector<QPointF> list;

    list.push_back(h->getOrigem()->getPoint());
    for(it = h->f_begin(); it != h->f_end(); ++it)
    {
        list.push_back(it->getOrigem()->getPoint());
    }

    QPolygonF po(list);

    return po.containsPoint(p, Qt::OddEvenFill);
}

double Interface::vProd(QPointF p1, QPointF p2)
{
    return (p1.x() * p2.y() - p1.y() * p2.x());
}

double Interface::eProd(QPointF p1, QPointF p2)
{
    return (p1.x() * p2.x() + p1.y() * p2.y());
}

double Interface::modulo2(QPointF p1, QPointF p2)
{
    double x = p2.x() - p1.x();
    double y = p2.y() - p1.y();

    return (x*x + y*y);

}

void Interface::clear(void)
{
    minX = INF;
    minY = INF;
    maxX = -INF;
    maxY = -INF;
    faceExterna = NULL;

    if(kdt != NULL)
        delete kdt;
    kdt = NULL;

    vertices.clear();
    faces.clear();
    map.clear();
    componentesFaceExterna.clear();
}


void Interface::deletaArestaExterna(HalfEdge * h_int)
{
    h_int->getProx()->setFace(faceExterna);
    h_int->getAnt()->setFace(faceExterna);
    //atualizando o ponteiro vertice->halfedge
    Vertex* v = h_int->getOrigem();
    if(v->getEdge() == h_int)
        v->setEdge(h_int->getAnt()->getTwin());

    v = h_int->getDestino();
    if(v->getEdge() == h_int->getTwin())
        v->setEdge(h_int->getProx());

    //o proximo do anterior é o proximo do gemeo
    h_int->getAnt()->setProx(h_int->getTwin()->getProx());
    h_int->getProx()->setAnt(h_int->getTwin()->getAnt());
    //o proximo do anterior do twin vai ser o meu proximo
    h_int->getTwin()->getAnt()->setProx(
            h_int->getProx()
    );
    h_int->getTwin()->getProx()->setAnt(
            h_int->getAnt()
    );


    retiraface(h_int->getFace());
    delete h_int->getFace();
    retirahalfedge(h_int->getTwin());
    retirahalfedge(h_int);
    delete h_int->getTwin();
    delete h_int;
}

void Interface::retiraface(Face* f)
{
    for(int i = 0; i < faces.size(); i++){
        if((faces[i]) == f){
            faces.remove(i);
            break;
        }
    }
}

void Interface::retirahalfedge(HalfEdge *h) {
    map.erase(map.find(map.key(h)));
}
