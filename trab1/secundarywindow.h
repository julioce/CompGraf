#ifndef SECUNDARYWINDOW_H
#define SECUNDARYWINDOW_H

#include "mainwindow.h"
#include <QMainWindow>

namespace Ui {
    class SecundaryWindow;
}

class SecundaryWindow : public QMainWindow
{
    Q_OBJECT
public:
    SecundaryWindow(QWidget *parent = 0);
    ~SecundaryWindow();
    Ui::SecundaryWindow *effect;

protected:
    void changeEvent(QEvent *e);

signals:

public slots:
    void readFile(void);

private:

};

#endif // SECUNDARYWINDOW_H
