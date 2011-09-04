#include "secundarywindow.h"
#include "mainwindow.h"
#include "ui_secundarywindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

SecundaryWindow::SecundaryWindow(QWidget *parent) :
    QMainWindow(parent),
    effect(new Ui::SecundaryWindow)
{
    effect->setupUi(this);

    connect(effect->pushButton, SIGNAL(clicked()), this, SLOT(readFile()));
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

void SecundaryWindow::readFile(void)
{
        MainWindow mainWindow(this);
        qDebug() << mainWindow.ui->imgResult->width() << mainWindow.ui->imgResult->height();
}
