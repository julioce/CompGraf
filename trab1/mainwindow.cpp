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
    connect(ui->applyButton, SIGNAL(clicked()), this, SLOT(saveChanges()));
    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(saveFile()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(exit()));

    connect(ui->resizeButton, SIGNAL(clicked()), this, SLOT(resize()));
    connect(ui->resizeSlider, SIGNAL(sliderReleased()), this, SLOT(zoom()));
    connect(ui->cropButton, SIGNAL(clicked()), this, SLOT(crop()));
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

    ui->imgResult->setGeometry(ui->imgResult->x(), ui->imgResult->y(), selectedImage->width(), selectedImage->height());
}

void MainWindow::exit(void)
{
    qApp->exit(0);
}

void MainWindow::saveChanges(void)
{
    qDebug() << "Salvou a alteracao feita";
    ui->imgSelected->setPixmap(QPixmap::fromImage(*targetImg));
    selectedImage = targetImg;
}

void MainWindow::saveFile(void)
{
    qDebug() << "Clicou em save";
    QString path = QFileDialog::getSaveFileName(this, tr("Image Factory - Open image")," ",tr("Image Files (*.png *.jpg *.bmp)"));
    qDebug() << path;
    targetImg->save(path);
}

void MainWindow::zoom(void)
{
    double sliderValue = ui->resizeSlider->value()-1;
    int width = selectedImage->width();
    int height = selectedImage->height();

    if(sliderValue < 0){
        sliderValue = (1/sliderValue)*(-1);
        qDebug() << "Foi chamado o magnify de valor" << sliderValue;
        simpleResize(width * sliderValue, height * sliderValue);
    }else if(sliderValue >= 0){
        qDebug() << "Foi chamado o magnify de valor" << sliderValue+2;
        simpleResize(width * (sliderValue + 2), height * (sliderValue + 2));
    }

}

void MainWindow::resize(void)
{
    qDebug() << "Foi chamado o resize";
    double aspectRatio;
    int newWidth = ui->inputWidth->text().toInt(0);
    int newHeight = ui->inputHeight->text().toInt(0);

    if(newWidth > 0 && newHeight > 0){
        if(ui->boxAspectRatio->isChecked()){

            aspectRatio = selectedImage->width() / (double)selectedImage->height();
            qDebug() << aspectRatio;

            if(newWidth > newHeight){
                simpleResize(newHeight*aspectRatio, newHeight);
            }else{
                simpleResize(newWidth*aspectRatio, newWidth);
            }
        }else{
            simpleResize(newWidth, newHeight);
        }
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

    ui->imgResult->setGeometry(ui->imgResult->x(), ui->imgResult->y(), targetImg->width(), targetImg->height());
    ui->imgResult->setPixmap(QPixmap::fromImage(*targetImg));
}

void MainWindow::crop(void)
{
    int newStartX = ui->labelStartXposition->text().toInt(0);
    int newStartY = ui->labelStartYposition->text().toInt(0);
    int newEndX = ui->labelEndXposition->text().toInt(0);
    int newEndY = ui->labelEndYposition->text().toInt(0);
    int width = newEndX-newStartX;
    int height = newEndY-newStartY;

    qDebug() << "Foi chamado o crop:";
    qDebug() << "from (" << newStartX << "," << newStartY
             << ") to (" << newEndX << "," << newEndY << ")";

    if( (width > 0 && height >0)
        &&
        (newStartX > 0 && newStartY > 0 && newEndX > 0 && newEndY > 0)
        &&
        (newStartX+width < selectedImage->width() && newStartY+height < selectedImage->height() &&
         newEndX < selectedImage->width() && newEndY < selectedImage->height()))
    {

        simpleCrop(newStartX, newStartY, newEndX, newEndY);
    }
}

void MainWindow::simpleCrop(int x1, int y1, int x2, int y2) {

    int target_width = x2 - x1;
    int target_height = y2 - y1;

    targetImg = new QImage(target_width, target_height, selectedImage->format());

    for (int i = 0; i < target_width; i++) {
        for (int j = 0; j < target_height; j++) {

            QRgb qrgb = selectedImage->pixel(x1 + i , y1 + j);
            targetImg->setPixel(i, j, qrgb);
        }
    }

    ui->imgResult->setGeometry(ui->imgResult->x(), ui->imgResult->y(), targetImg->width(), targetImg->height());
    ui->imgResult->setPixmap(QPixmap::fromImage(*targetImg));
}

void MainWindow::rotateRight() {
    qDebug() << "Foi chamada a rotacao a Direta";
    int target_width = selectedImage->width();
    int target_height = selectedImage->height();
    targetImg = new QImage(target_height, target_width, selectedImage->format());


    for (int i = 0; i < target_width; i++) {
        for (int j = 0; j < target_height; j++) {

            QRgb qrgb = selectedImage->pixel(i, j);
            targetImg->setPixel(target_height-j-1, i, qrgb);
        }
    }

    ui->imgResult->setGeometry(ui->imgResult->x(), ui->imgResult->y(), targetImg->width(), targetImg->height());
    ui->imgResult->setPixmap(QPixmap::fromImage(*targetImg));

}

void MainWindow::rotateLeft() {
    qDebug() << "Foi chamada a rotacao a Esquerda";
    int target_width = selectedImage->width();
    int target_height = selectedImage->height();
    targetImg = new QImage(target_height, target_width, selectedImage->format());


    for (int i = 0; i < target_width; i++) {
        for (int j = 0; j < target_height; j++) {

            QRgb qrgb = selectedImage->pixel(i, j);
            targetImg->setPixel(j, target_width-i, qrgb);
        }
    }

    ui->imgResult->setGeometry(ui->imgResult->x(), ui->imgResult->y(), targetImg->width(), targetImg->height());
    ui->imgResult->setPixmap(QPixmap::fromImage(*targetImg));

}


