/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Aug 27 20:44:04 2011
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
#include <QtGui/QSlider>
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
    QLabel *labelMagnify;
    QFrame *line_3;
    QLineEdit *inputWidth;
    QLineEdit *inputHeight;
    QLabel *labelWidth;
    QLabel *labelHeight;
    QPushButton *applyButton;
    QCheckBox *boxAspectRatio;
    QSlider *resizeSlider;
    QLabel *label;
    QLabel *labelCrop;
    QFrame *line_4;
    QLabel *labelResize;
    QFrame *line_5;
    QLabel *labelStartX;
    QLabel *labelStartY;
    QLabel *labelEndX;
    QLabel *labelEndY;
    QLineEdit *labelStartXposition;
    QLineEdit *labelStartYposition;
    QLineEdit *labelEndXposition;
    QLineEdit *labelEndYposition;
    QPushButton *cropButton;
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
        imgSelected->setGeometry(QRect(20, 30, 190, 160));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imgSelected->sizePolicy().hasHeightForWidth());
        imgSelected->setSizePolicy(sizePolicy1);
        imgSelected->setCursor(QCursor(Qt::ArrowCursor));
        imgSelected->setMouseTracking(true);
        imgSelected->setFrameShape(QFrame::Box);
        imgSelected->setFrameShadow(QFrame::Raised);
        imgSelected->setLineWidth(0);
        imgSelected->setMidLineWidth(1);
        imgSelected->setScaledContents(false);
        imgSelected->setAlignment(Qt::AlignCenter);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(222, 0, 20, 580));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(255);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        resizeButton = new QPushButton(centralWidget);
        resizeButton->setObjectName(QString::fromUtf8("resizeButton"));
        resizeButton->setGeometry(QRect(145, 320, 71, 27));
        imgResult = new QLabel(centralWidget);
        imgResult->setObjectName(QString::fromUtf8("imgResult"));
        imgResult->setGeometry(QRect(249, 30, 530, 531));
        sizePolicy.setHeightForWidth(imgResult->sizePolicy().hasHeightForWidth());
        imgResult->setSizePolicy(sizePolicy);
        imgResult->setSizeIncrement(QSize(0, 0));
        imgResult->setAutoFillBackground(false);
        imgResult->setTextFormat(Qt::AutoText);
        imgResult->setScaledContents(false);
        imgResult->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        rightButton = new QPushButton(centralWidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 480, 50, 50));
        rightButton->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/Redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightButton->setIcon(icon);
        rightButton->setIconSize(QSize(32, 32));
        leftButton = new QPushButton(centralWidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(15, 480, 50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/Undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftButton->setIcon(icon1);
        leftButton->setIconSize(QSize(32, 32));
        labelRotate = new QLabel(centralWidget);
        labelRotate->setObjectName(QString::fromUtf8("labelRotate"));
        labelRotate->setGeometry(QRect(20, 457, 60, 17));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 465, 190, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(155, 538, 61, 27));
        labelSample = new QLabel(centralWidget);
        labelSample->setObjectName(QString::fromUtf8("labelSample"));
        labelSample->setGeometry(QRect(20, 10, 62, 16));
        labelMagnify = new QLabel(centralWidget);
        labelMagnify->setObjectName(QString::fromUtf8("labelMagnify"));
        labelMagnify->setGeometry(QRect(20, 200, 60, 16));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 208, 190, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        inputWidth = new QLineEdit(centralWidget);
        inputWidth->setObjectName(QString::fromUtf8("inputWidth"));
        inputWidth->setGeometry(QRect(20, 294, 44, 22));
        inputHeight = new QLineEdit(centralWidget);
        inputHeight->setObjectName(QString::fromUtf8("inputHeight"));
        inputHeight->setGeometry(QRect(120, 294, 44, 22));
        labelWidth = new QLabel(centralWidget);
        labelWidth->setObjectName(QString::fromUtf8("labelWidth"));
        labelWidth->setGeometry(QRect(70, 302, 41, 16));
        labelHeight = new QLabel(centralWidget);
        labelHeight->setObjectName(QString::fromUtf8("labelHeight"));
        labelHeight->setGeometry(QRect(170, 302, 41, 16));
        applyButton = new QPushButton(centralWidget);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setGeometry(QRect(17, 538, 121, 27));
        boxAspectRatio = new QCheckBox(centralWidget);
        boxAspectRatio->setObjectName(QString::fromUtf8("boxAspectRatio"));
        boxAspectRatio->setGeometry(QRect(19, 324, 111, 20));
        resizeSlider = new QSlider(centralWidget);
        resizeSlider->setObjectName(QString::fromUtf8("resizeSlider"));
        resizeSlider->setGeometry(QRect(20, 237, 190, 22));
        resizeSlider->setMinimum(1);
        resizeSlider->setMaximum(5);
        resizeSlider->setPageStep(1);
        resizeSlider->setValue(1);
        resizeSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(23, 225, 190, 16));
        labelCrop = new QLabel(centralWidget);
        labelCrop->setObjectName(QString::fromUtf8("labelCrop"));
        labelCrop->setGeometry(QRect(20, 360, 60, 16));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 370, 190, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        labelResize = new QLabel(centralWidget);
        labelResize->setObjectName(QString::fromUtf8("labelResize"));
        labelResize->setGeometry(QRect(20, 270, 60, 16));
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(20, 278, 190, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        labelStartX = new QLabel(centralWidget);
        labelStartX->setObjectName(QString::fromUtf8("labelStartX"));
        labelStartX->setGeometry(QRect(70, 396, 41, 16));
        labelStartY = new QLabel(centralWidget);
        labelStartY->setObjectName(QString::fromUtf8("labelStartY"));
        labelStartY->setGeometry(QRect(70, 418, 41, 16));
        labelEndX = new QLabel(centralWidget);
        labelEndX->setObjectName(QString::fromUtf8("labelEndX"));
        labelEndX->setGeometry(QRect(173, 396, 41, 16));
        labelEndY = new QLabel(centralWidget);
        labelEndY->setObjectName(QString::fromUtf8("labelEndY"));
        labelEndY->setGeometry(QRect(173, 418, 41, 16));
        labelStartXposition = new QLineEdit(centralWidget);
        labelStartXposition->setObjectName(QString::fromUtf8("labelStartXposition"));
        labelStartXposition->setGeometry(QRect(20, 390, 44, 22));
        labelStartYposition = new QLineEdit(centralWidget);
        labelStartYposition->setObjectName(QString::fromUtf8("labelStartYposition"));
        labelStartYposition->setGeometry(QRect(20, 410, 44, 22));
        labelEndXposition = new QLineEdit(centralWidget);
        labelEndXposition->setObjectName(QString::fromUtf8("labelEndXposition"));
        labelEndXposition->setGeometry(QRect(122, 390, 44, 22));
        labelEndYposition = new QLineEdit(centralWidget);
        labelEndYposition->setObjectName(QString::fromUtf8("labelEndYposition"));
        labelEndYposition->setGeometry(QRect(122, 410, 44, 22));
        cropButton = new QPushButton(centralWidget);
        cropButton->setObjectName(QString::fromUtf8("cropButton"));
        cropButton->setGeometry(QRect(155, 435, 61, 27));
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
        rightButton->setText(QString());
        leftButton->setText(QString());
        labelRotate->setText(QApplication::translate("MainWindow", "Rotate", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        labelSample->setText(QApplication::translate("MainWindow", "Sample", 0, QApplication::UnicodeUTF8));
        labelMagnify->setText(QApplication::translate("MainWindow", "Magnify", 0, QApplication::UnicodeUTF8));
        labelWidth->setText(QApplication::translate("MainWindow", "width", 0, QApplication::UnicodeUTF8));
        labelHeight->setText(QApplication::translate("MainWindow", "height", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("MainWindow", "Apply Changes", 0, QApplication::UnicodeUTF8));
        boxAspectRatio->setText(QApplication::translate("MainWindow", "Aspect Ratio", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "1x      2x       3x      4x      5x", 0, QApplication::UnicodeUTF8));
        labelCrop->setText(QApplication::translate("MainWindow", "Crop", 0, QApplication::UnicodeUTF8));
        labelResize->setText(QApplication::translate("MainWindow", "Resize", 0, QApplication::UnicodeUTF8));
        labelStartX->setText(QApplication::translate("MainWindow", "X start", 0, QApplication::UnicodeUTF8));
        labelStartY->setText(QApplication::translate("MainWindow", "Y start", 0, QApplication::UnicodeUTF8));
        labelEndX->setText(QApplication::translate("MainWindow", "X end", 0, QApplication::UnicodeUTF8));
        labelEndY->setText(QApplication::translate("MainWindow", "Y end", 0, QApplication::UnicodeUTF8));
        cropButton->setText(QApplication::translate("MainWindow", "Crop", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
