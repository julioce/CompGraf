#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void simpleResize(int w2, int h2);

protected:
    void changeEvent(QEvent *e);

public slots:
   void openFile(void);
   void resize(void);

private:
    Ui::MainWindow *ui;
    QImage *selectedQImage;

};

#endif // MAINWINDOW_H
