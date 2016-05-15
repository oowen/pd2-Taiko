#include "timer.h"
#include<QtCore>
#include<QDebug>




Timer::Timer()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(Myslot()));
    timer->start(1000);
};


void Timer::Myslot()
{

        qDebug()<<k;
        k--;
           if(k==-1)
            exit(1);

};
