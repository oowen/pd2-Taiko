#include "myitem.h"
#include<QGraphicsPixmapItem>
#include<QLabel>
#include<QTimer>
#include<QtTest/QTest>
#include<QWidget>
#include"window1.h"
#include <QKeyEvent>
#include<QPoint>

    int a[100];
    QString str[100];
    QPixmap p;
    int i;

myitem::myitem()
{

}
/*void myitem::addnew(){
    for(i=0;i<100;i++){
        a[i]=rand()%2;
        if(a[i]==0)
            str[i]="/photo/file/1463239500648.png";
        else
            str[i]="/photo/file/1463239500661.png";
    }
}
void myitem::addspeed(){
    for(i=0;i<100;i++)
        p.load(str[i]);
    QTest::qWait(500);
}
void myitem::run(){
}
*/
