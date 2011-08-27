/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Aug 27 11:01:29 2011
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
#include <QtGui/QCheckBox>
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
    QLabel *labelWidth;
    QLabel *labelWidth_2;
    QPushButton *applyButton;
    QCheckBox *boxAspectRatio;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
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
        imgSelected->setGeometry(QRect(20, 30, 185, 160));
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
        line->setGeometry(QRect(220, 10, 16, 561));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(255);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        resizeButton = new QPushButton(centralWidget);
        resizeButton->setObjectName(QString::fromUtf8("resizeButton"));
        resizeButton->setGeometry(QRect(145, 280, 71, 27));
        imgResult = new QLabel(centralWidget);
        imgResult->setObjectName(QString::fromUtf8("imgResult"));
        imgResult->setGeometry(QRect(260, 30, 510, 480));
        imgResult->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        rightButton = new QPushButton(centralWidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 535, 61, 27));
        leftButton = new QPushButton(centralWidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(15, 535, 56, 27));
        labelRotate = new QLabel(centralWidget);
        labelRotate->setObjectName(QString::fromUtf8("labelRotate"));
        labelRotate->setGeometry(QRect(20, 510, 60, 17));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 520, 190, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(720, 535, 61, 27));
        labelSample = new QLabel(centralWidget);
        labelSample->setObjectName(QString::fromUtf8("labelSample"));
        labelSample->setGeometry(QRect(20, 10, 62, 16));
        labelResize = new QLabel(centralWidget);
        labelResize->setObjectName(QString::fromUtf8("labelResize"));
        labelResize->setGeometry(QRect(20, 200, 60, 16));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 210, 190, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        inputWidth = new QLineEdit(centralWidget);
        inputWidth->setObjectName(QString::fromUtf8("inputWidth"));
        inputWidth->setGeometry(QRect(20, 230, 44, 22));
        inputHeight = new QLineEdit(centralWidget);
        inputHeight->setObjectName(QString::fromUtf8("inputHeight"));
        inputHeight->setGeometry(QRect(120, 230, 44, 22));
        labelWidth = new QLabel(centralWidget);
        labelWidth->setObjectName(QString::fromUtf8("labelWidth"));
        labelWidth->setGeometry(QRect(70, 238, 41, 16));
        labelWidth_2 = new QLabel(centralWidget);
        labelWidth_2->setObjectName(QString::fromUtf8("labelWidth_2"));
        labelWidth_2->setGeometry(QRect(170, 238, 41, 16));
        applyButton = new QPushButton(centralWidget);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setGeometry(QRect(260, 535, 61, 27));
        boxAspectRatio = new QCheckBox(centralWidget);
        boxAspectRatio->setObjectName(QString::fromUtf8("boxAspectRatio"));
        boxAspectRatio->setGeometry(QRect(20, 260, 190, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
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
        labelWidth->setText(QApplication::translate("MainWindow", "width", 0, QApplication::UnicodeUTF8));
        labelWidth_2->setText(QApplication::translate("MainWindow", "height", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
        boxAspectRatio->setText(QApplication::translate("MainWindow", "Keep Aspect Ratio", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
