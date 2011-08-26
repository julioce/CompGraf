#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QDebug"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    selectedQImage = new QImage();
    connect(ui->actionOpenFile, SIGNAL(triggered()), this, SLOT(openFile()));
    connect(ui->resizeButton, SIGNAL(clicked()), this, SLOT(resize()));
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::openFile(void)
{
    qDebug() << "Clicou em open file";
    QString path = QFileDialog::getOpenFileName(this, tr("Open image - Image Factory")," ",tr("Image Files (*.png *.jpg *.bmp)"));
    qDebug() << path;
    selectedQImage->load(path);

    ui->imgSelected->setPixmap(QPixmap::fromImage(*selectedQImage));
    ui->imgResult->setPixmap(QPixmap::fromImage(*selectedQImage));
}

void MainWindow::resize(void)
{
    simpleResize(180, 200);
}

void MainWindow::simpleResize(int w2, int h2)
{
    QImage *targetImg = new QImage(w2, h2, selectedQImage->format());
    double x_ratio = selectedQImage->width()/(double)w2;
    double y_ratio = selectedQImage->height()/(double)h2;
    qDebug() << "xratio " << x_ratio;
    qDebug() << "yratio " << y_ratio;
    double px, py;

    for (int i = 0; i < h2; i++) {
        for (int j = 0; j < w2; j++) {

            px = floor(j * x_ratio);
            py = floor(i * y_ratio);
            QRgb qrgb = selectedQImage->pixel(px, py);
            targetImg->setPixel(j, i, qrgb);
        }
    }

    ui->imgResult->setPixmap(QPixmap::fromImage(*targetImg));
}
