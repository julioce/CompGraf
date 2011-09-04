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

    connect(effect->pushButton, SIGNAL(clicked()), this, SLOT(changeRGB()));
    connect(effect->applyChanges, SIGNAL(clicked()), this, SLOT(applyChanges()));
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

void SecundaryWindow::changeRGB(void)
{
    int width = target->width();
    int height = target->height();
    int red, green, blue;

    QRgb qrgb = qRgb(0,0,0);

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {

            qrgb = target->pixel(i, j);

            red = qRed(qrgb)*2;
            green = qGreen(qrgb);
            blue = qBlue(qrgb);

            qrgb = qRgb(red, green, blue);

            target->setPixel(i, j, qrgb);
        }
    }

    main->imgResult->setPixmap(QPixmap::fromImage(*target));
}
