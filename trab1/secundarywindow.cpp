#include "secundarywindow.h"
#include "mainwindow.h"
#include "ui_secundarywindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

SecundaryWindow::SecundaryWindow(QWidget *parent, Ui::MainWindow *ui, QImage *selectedImage, QImage *targetImg) :
    QMainWindow(parent),
    effect(new Ui::SecundaryWindow)
{
    effect->setupUi(this);

    main = ui;
    selected = new QImage(*selectedImage);
    target = new QImage(*targetImg);

    connect(effect->applyChanges, SIGNAL(clicked()), this, SLOT(applyChanges()));

    connect(effect->rSlider, SIGNAL(sliderReleased()), this, SLOT(changeR()));
    connect(effect->gSlider, SIGNAL(sliderReleased()), this, SLOT(changeG()));
    connect(effect->bSlider, SIGNAL(sliderReleased()), this, SLOT(changeB()));
}

SecundaryWindow::~SecundaryWindow()
{
    delete effect;
}

void SecundaryWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        effect->retranslateUi(this);
        break;
    default:
        break;
    }
}

void SecundaryWindow::applyChanges(void)
{
    qDebug() << "Salvou a alteracao feita";
    main->imgSelected->setPixmap(QPixmap::fromImage(*target));
    selected = target;
}


void SecundaryWindow::changeR(void)
{
    int width = selected->width();
    int height = selected->height();
    int red, green, blue;

    QRgb qrgb = qRgb(0,0,0);

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {

            qrgb = selected->pixel(i, j);

            red = qRed(qrgb);
            green = qGreen(qrgb)*(effect->rSlider->value()/255.0);
            blue = qBlue(qrgb)*(effect->rSlider->value()/255.0);

            qrgb = qRgb(red, green, blue);

            target->setPixel(i, j, qrgb);
        }
    }

    main->imgResult->setPixmap(QPixmap::fromImage(*target));
}

void SecundaryWindow::changeG(void)
{
    int width = selected->width();
    int height = selected->height();
    int red, green, blue;

    QRgb qrgb = qRgb(0,0,0);

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {

            qrgb = selected->pixel(i, j);

            red = qRed(qrgb)*(effect->gSlider->value()/255.0);
            green = qGreen(qrgb);
            blue = qBlue(qrgb)*(effect->gSlider->value()/255.0);

            qrgb = qRgb(red, green, blue);

            target->setPixel(i, j, qrgb);
        }
    }

    main->imgResult->setPixmap(QPixmap::fromImage(*target));
}

void SecundaryWindow::changeB(void)
{
    int width = selected->width();
    int height = selected->height();
    int red, green, blue;

    QRgb qrgb = qRgb(0,0,0);

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {

            qrgb = selected->pixel(i, j);

            red = qRed(qrgb)*(effect->bSlider->value()/255.0);
            green = qGreen(qrgb)*(effect->bSlider->value()/255.0);
            blue = qBlue(qrgb);

            qrgb = qRgb(red, green, blue);

            target->setPixel(i, j, qrgb);
        }
    }

    main->imgResult->setPixmap(QPixmap::fromImage(*target));
}

