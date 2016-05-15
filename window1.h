#ifndef WINDOW1_H
#define WINDOW1_H

#include <QMainWindow>
#include<QtCore>
#include<QGraphicsRectItem>
#include"window2.h"

namespace Ui {
class window1;
}


class window1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit window1(QWidget *parent = 0);
    ~window1();

private slots:
    void timer_timeout();
    void run();
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::window1 *ui;
    //Form *window;

    int getpoint=0;
};

#endif // WINDOW1_H
