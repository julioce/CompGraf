/********************************************************************************
** Form generated from reading UI file 'secundarywindow.ui'
**
** Created: Sun Sep 4 16:05:39 2011
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
    QPushButton *applyChanges;
    QLabel *labelLess;
    QLabel *labelMore;

    void setupUi(QWidget *SecundaryWindow)
    {
        if (SecundaryWindow->objectName().isEmpty())
            SecundaryWindow->setObjectName(QString::fromUtf8("SecundaryWindow"));
        SecundaryWindow->setWindowModality(Qt::NonModal);
        SecundaryWindow->resize(349, 323);
        rSlider = new QSlider(SecundaryWindow);
        rSlider->setObjectName(QString::fromUtf8("rSlider"));
        rSlider->setGeometry(QRect(23, 30, 22, 160));
        rSlider->setMaximum(255);
        rSlider->setPageStep(1);
        rSlider->setValue(255);
        rSlider->setOrientation(Qt::Vertical);
        gSlider = new QSlider(SecundaryWindow);
        gSlider->setObjectName(QString::fromUtf8("gSlider"));
        gSlider->setGeometry(QRect(53, 30, 22, 160));
        gSlider->setMaximum(255);
        gSlider->setPageStep(1);
        gSlider->setValue(255);
        gSlider->setOrientation(Qt::Vertical);
        bSlider = new QSlider(SecundaryWindow);
        bSlider->setObjectName(QString::fromUtf8("bSlider"));
        bSlider->setGeometry(QRect(83, 30, 22, 160));
        bSlider->setMaximum(255);
        bSlider->setPageStep(1);
        bSlider->setValue(255);
        bSlider->setOrientation(Qt::Vertical);
        RGBlabel = new QLabel(SecundaryWindow);
        RGBlabel->setObjectName(QString::fromUtf8("RGBlabel"));
        RGBlabel->setGeometry(QRect(30, 10, 81, 16));
        applyChanges = new QPushButton(SecundaryWindow);
        applyChanges->setObjectName(QString::fromUtf8("applyChanges"));
        applyChanges->setGeometry(QRect(10, 280, 121, 32));
        labelLess = new QLabel(SecundaryWindow);
        labelLess->setObjectName(QString::fromUtf8("labelLess"));
        labelLess->setGeometry(QRect(10, 30, 16, 16));
        labelLess->setAlignment(Qt::AlignCenter);
        labelMore = new QLabel(SecundaryWindow);
        labelMore->setObjectName(QString::fromUtf8("labelMore"));
        labelMore->setGeometry(QRect(10, 175, 16, 16));
        labelMore->setAlignment(Qt::AlignCenter);

        retranslateUi(SecundaryWindow);

        QMetaObject::connectSlotsByName(SecundaryWindow);
    } // setupUi

    void retranslateUi(QWidget *SecundaryWindow)
    {
        SecundaryWindow->setWindowTitle(QApplication::translate("SecundaryWindow", "Form", 0, QApplication::UnicodeUTF8));
        RGBlabel->setText(QApplication::translate("SecundaryWindow", "R     G     B", 0, QApplication::UnicodeUTF8));
        applyChanges->setText(QApplication::translate("SecundaryWindow", "Apply Changes", 0, QApplication::UnicodeUTF8));
        labelLess->setText(QApplication::translate("SecundaryWindow", "-", 0, QApplication::UnicodeUTF8));
        labelMore->setText(QApplication::translate("SecundaryWindow", "+", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SecundaryWindow: public Ui_SecundaryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECUNDARYWINDOW_H
