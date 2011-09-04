/********************************************************************************
** Form generated from reading UI file 'secundarywindow.ui'
**
** Created: Sun Sep 4 13:46:35 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECUNDARYWINDOW_H
#define UI_SECUNDARYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecundaryWindow
{
public:
    QSlider *rSlider;
    QSlider *gSlider;
    QSlider *bSlider;
    QLabel *RGBlabel;
    QLabel *hiddenPreview;
    QPushButton *pushButton;
    QPushButton *applyChanges;

    void setupUi(QWidget *SecundaryWindow)
    {
        if (SecundaryWindow->objectName().isEmpty())
            SecundaryWindow->setObjectName(QString::fromUtf8("SecundaryWindow"));
        SecundaryWindow->setWindowModality(Qt::NonModal);
        SecundaryWindow->resize(349, 323);
        rSlider = new QSlider(SecundaryWindow);
        rSlider->setObjectName(QString::fromUtf8("rSlider"));
        rSlider->setGeometry(QRect(10, 30, 22, 160));
        rSlider->setMaximum(255);
        rSlider->setOrientation(Qt::Vertical);
        gSlider = new QSlider(SecundaryWindow);
        gSlider->setObjectName(QString::fromUtf8("gSlider"));
        gSlider->setGeometry(QRect(40, 30, 22, 160));
        gSlider->setMaximum(255);
        gSlider->setOrientation(Qt::Vertical);
        bSlider = new QSlider(SecundaryWindow);
        bSlider->setObjectName(QString::fromUtf8("bSlider"));
        bSlider->setGeometry(QRect(70, 30, 22, 160));
        bSlider->setMaximum(255);
        bSlider->setOrientation(Qt::Vertical);
        RGBlabel = new QLabel(SecundaryWindow);
        RGBlabel->setObjectName(QString::fromUtf8("RGBlabel"));
        RGBlabel->setGeometry(QRect(17, 10, 81, 16));
        hiddenPreview = new QLabel(SecundaryWindow);
        hiddenPreview->setObjectName(QString::fromUtf8("hiddenPreview"));
        hiddenPreview->setGeometry(QRect(330, 300, 0, 0));
        pushButton = new QPushButton(SecundaryWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 220, 114, 32));
        applyChanges = new QPushButton(SecundaryWindow);
        applyChanges->setObjectName(QString::fromUtf8("applyChanges"));
        applyChanges->setGeometry(QRect(10, 270, 121, 32));

        retranslateUi(SecundaryWindow);

        QMetaObject::connectSlotsByName(SecundaryWindow);
    } // setupUi

    void retranslateUi(QWidget *SecundaryWindow)
    {
        SecundaryWindow->setWindowTitle(QApplication::translate("SecundaryWindow", "Form", 0, QApplication::UnicodeUTF8));
        RGBlabel->setText(QApplication::translate("SecundaryWindow", "R     G     B", 0, QApplication::UnicodeUTF8));
        hiddenPreview->setText(QString());
        pushButton->setText(QApplication::translate("SecundaryWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        applyChanges->setText(QApplication::translate("SecundaryWindow", "Apply Changes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SecundaryWindow: public Ui_SecundaryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECUNDARYWINDOW_H
