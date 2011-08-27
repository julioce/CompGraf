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

protected:
    void changeEvent(QEvent *e);

public slots:
   void openFile(void);
   void saveChanges(void);
   void saveFile(void);
   void exit(void);

   void magnify(void);
   void resize(void);
   void rotateRight(void);
   void rotateLeft(void);

private:
    Ui::MainWindow *ui;
    QImage *selectedImage, *targetImg;
    void simpleResize(int w2, int h2);
    void crop(int x1, int y1, int x2, int y2);

};

#endif // MAINWINDOW_H
