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
    selectedImage = new QImage();
    connect(ui->actionOpenFile, SIGNAL(triggered()), this, SLOT(openFile()));
    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(saveFile()));

    connect(ui->resizeButton, SIGNAL(clicked()), this, SLOT(resize()));
    connect(ui->rightButton, SIGNAL(clicked()), this, SLOT(rotateRight()));
    connect(ui->leftButton, SIGNAL(clicked()), this, SLOT(rotateLeft()));
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
    selectedImage->load(path);

    ui->imgSelected->setPixmap(QPixmap::fromImage(*selectedImage));
    ui->imgResult->setPixmap(QPixmap::fromImage(*selectedImage));
}

void MainWindow::saveFile(void)
{
    targetImg->save("./edited.png");
}

void MainWindow::resize(void)
{
    if(ui->inputWidth->text().toInt(0) > 0 && ui->inputHeight->text().toInt(0) > 0)
    {
        simpleResize(ui->inputWidth->text().toInt(0), ui->inputHeight->text().toInt(0));
    }
}

/* Nearest Neighbor Image Scaling */
void MainWindow::simpleResize(int target_width, int target_height)
{
    targetImg = new QImage(target_width, target_height, selectedImage->format());

    double x_ratio = selectedImage->width() / (double)target_width;
    double y_ratio = selectedImage->height() / (double)target_height;
    double x_source, y_source;

    for (int i = 0; i < target_width; i++) {
        for (int j = 0; j < target_height; j++) {

            x_source = floor(i * x_ratio);
            y_source = floor(j * y_ratio);

            QRgb qrgb = selectedImage->pixel(x_source, y_source);
            targetImg->setPixel(i, j, qrgb);
        }
    }

    ui->imgResult->setPixmap(QPixmap::fromImage(*targetImg));
}

void MainWindow::crop(int x1, int y1, int x2, int y2) {

    int target_width = x2 - x1;
    int target_height = y2 - y1;

    qDebug() << "x1 " << x1 << "y1 " << y1 << "target_width " << target_width;

    targetImg = new QImage(target_width, target_height, selectedImage->format());

    for (int i = 0; i < target_width; i++) {
        for (int j = 0; j < target_height; j++) {

            QRgb qrgb = selectedImage->pixel(x1 + i , y1 + j);
            targetImg->setPixel(i, j, qrgb);
        }
    }

    ui->imgResult->setPixmap(QPixmap::fromImage(*targetImg));
}

void MainWindow::rotateRight() {

    int target_width = selectedImage->width();
    int target_height = selectedImage->height();
    targetImg = new QImage(target_height, target_width, selectedImage->format());


    for (int i = 0; i < target_width; i++) {
        for (int j = 0; j < target_height; j++) {

            QRgb qrgb = selectedImage->pixel(i, j);
            targetImg->setPixel(target_height-j-1, i, qrgb);
        }
    }

    ui->imgResult->setPixmap(QPixmap::fromImage(*targetImg));

}

void MainWindow::rotateLeft() {

    int target_width = selectedImage->width();
    int target_height = selectedImage->height();
    targetImg = new QImage(target_height, target_width, selectedImage->format());


    for (int i = 0; i < target_width; i++) {
        for (int j = 0; j < target_height; j++) {

            QRgb qrgb = selectedImage->pixel(i, j);
            targetImg->setPixel(j, target_width-i, qrgb);
        }
    }

    ui->imgResult->setPixmap(QPixmap::fromImage(*targetImg));

}


