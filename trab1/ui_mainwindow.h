/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Aug 27 08:23:43 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenFile;
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *imgSelected;
    QFrame *line;
    QPushButton *resizeButton;
    QLabel *imgResult;
    QPushButton *rightButton;
    QPushButton *leftButton;
    QLabel *labelRotate;
    QFrame *line_2;
    QPushButton *saveButton;
    QLabel *labelSample;
    QLabel *labelResize;
    QFrame *line_3;
    QLineEdit *inputWidth;
    QLineEdit *inputHeight;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        imgSelected = new QLabel(centralWidget);
        imgSelected->setObjectName(QString::fromUtf8("imgSelected"));
        imgSelected->setGeometry(QRect(15, 30, 180, 160));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imgSelected->sizePolicy().hasHeightForWidth());
        imgSelected->setSizePolicy(sizePolicy1);
        imgSelected->setCursor(QCursor(Qt::CrossCursor));
        imgSelected->setMouseTracking(true);
        imgSelected->setFrameShape(QFrame::Box);
        imgSelected->setFrameShadow(QFrame::Raised);
        imgSelected->setLineWidth(0);
        imgSelected->setMidLineWidth(1);
        imgSelected->setScaledContents(false);
        imgSelected->setAlignment(Qt::AlignCenter);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(205, 10, 16, 358));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(255);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        resizeButton = new QPushButton(centralWidget);
        resizeButton->setObjectName(QString::fromUtf8("resizeButton"));
        resizeButton->setGeometry(QRect(5, 264, 71, 27));
        imgResult = new QLabel(centralWidget);
        imgResult->setObjectName(QString::fromUtf8("imgResult"));
        imgResult->setGeometry(QRect(230, 10, 351, 311));
        imgResult->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        rightButton = new QPushButton(centralWidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(60, 330, 61, 27));
        leftButton = new QPushButton(centralWidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(5, 330, 56, 27));
        labelRotate = new QLabel(centralWidget);
        labelRotate->setObjectName(QString::fromUtf8("labelRotate"));
        labelRotate->setGeometry(QRect(10, 305, 59, 17));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 316, 105, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(531, 330, 61, 27));
        labelSample = new QLabel(centralWidget);
        labelSample->setObjectName(QString::fromUtf8("labelSample"));
        labelSample->setGeometry(QRect(10, 7, 62, 16));
        labelResize = new QLabel(centralWidget);
        labelResize->setObjectName(QString::fromUtf8("labelResize"));
        labelResize->setGeometry(QRect(10, 200, 62, 16));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 210, 105, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        inputWidth = new QLineEdit(centralWidget);
        inputWidth->setObjectName(QString::fromUtf8("inputWidth"));
        inputWidth->setGeometry(QRect(10, 230, 61, 22));
        inputHeight = new QLineEdit(centralWidget);
        inputHeight->setObjectName(QString::fromUtf8("inputHeight"));
        inputHeight->setGeometry(QRect(100, 230, 61, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpenFile);
        menuFile->addAction(actionExit);
        menuFile->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Image Factory", 0, QApplication::UnicodeUTF8));
        actionOpenFile->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        imgSelected->setText(QString());
        resizeButton->setText(QApplication::translate("MainWindow", "Resize", 0, QApplication::UnicodeUTF8));
        imgResult->setText(QString());
        rightButton->setText(QApplication::translate("MainWindow", "Right", 0, QApplication::UnicodeUTF8));
        leftButton->setText(QApplication::translate("MainWindow", "Left", 0, QApplication::UnicodeUTF8));
        labelRotate->setText(QApplication::translate("MainWindow", "Rotate", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        labelSample->setText(QApplication::translate("MainWindow", "Sample", 0, QApplication::UnicodeUTF8));
        labelResize->setText(QApplication::translate("MainWindow", "Resize", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
