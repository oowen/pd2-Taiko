#include "window1.h"
#include "ui_window1.h"
#include "window2.h"
#include <QKeyEvent>
#include <QTimer>
#include <QDebug>
#include <Qpushbutton>
#include <QMessageBox>
#include <QtCore>
#include<QLabel>

 QTimer *timer ;
 QTimer *timer1;
 int cnt =30;
 int i,j,k;
 int a[8];


window1::window1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::window1){
    ui->setupUi(this);

    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    timer->start();

    timer1 = new QTimer(this);
    timer1->setInterval(10);
    connect(timer1,SIGNAL(timeout()),this,SLOT(run()));
    timer1->start();

}
void window1:: run(){
    ui->face0->move(QPoint(ui->face0->x()-2,80));
    ui->face1->move(QPoint(ui->face1->x()-2,80));
    ui->face2->move(QPoint(ui->face2->x()-2,80));
    ui->face3->move(QPoint(ui->face3->x()-2,80));
    ui->face4->move(QPoint(ui->face4->x()-2,80));
    ui->face5->move(QPoint(ui->face5->x()-2,80));
    ui->face6->move(QPoint(ui->face6->x()-2,80));
    ui->face7->move(QPoint(ui->face7->x()-2,80));

    if(ui->face0->x()<-100){
        ui->face0->move(QPoint(ui->face0->x()+800,80));
    ui->face0->show();}
    if(ui->face1->x()<-100){
        ui->face1->move(QPoint(ui->face1->x()+800,80));
    ui->face1->show();}
    if(ui->face2->x()<-100){
        ui->face2->move(QPoint(ui->face2->x()+800,80));
    ui->face2->show();}
    if(ui->face3->x()<-100){
        ui->face3->move(QPoint(ui->face3->x()+800,80));
    ui->face3->show();}
    if(ui->face4->x()<-100){
        ui->face4->move(QPoint(ui->face4->x()+800,80));
    ui->face4->show();}
    if(ui->face5->x()<-100){
        ui->face5->move(QPoint(ui->face5->x()+800,80));
    ui->face5->show();}
    if(ui->face6->x()<-100){
        ui->face6->move(QPoint(ui->face6->x()+800,80));
    ui->face6->show();}
    if(ui->face7->x()<-100){
        ui->face7->move(QPoint(ui->face7->x()+800,80));
    ui->face7->show();}
}

void window1::timer_timeout(){
    ui->label_2->setText(QString::number(cnt));
    cnt--;
    if(cnt<0){
        Form * window = new Form;//*和new連用
        window->showscore(getpoint);
        window->show();
        timer->stop();
        cnt=30;
        this->hide();
    }
}
window1::~window1()
{
    delete ui;
}

void window1::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_J){
     if(ui->face0->x()>-50 && ui->face0->x()<50){
         ui->face0->hide();
         getpoint++;
     ui->label_5->setText(QString::number(getpoint));}}


     if(event->key() == Qt::Key_K){
      if(ui->face1->x()>-50 && ui->face1->x()<50){
          ui->face1->hide();
          getpoint++;
      ui->label_5->setText(QString::number(getpoint));}}

      if(event->key() == Qt::Key_J){
       if(ui->face2->x()>-50 && ui->face2->x()<50){
           ui->face2->hide();
           getpoint++;
           ui->label_5->setText(QString::number(getpoint));}}


       if(event->key() == Qt::Key_K){
        if(ui->face3->x()>-50 && ui->face3->x()<50){
            ui->face3->hide();
            getpoint++;
        ui->label_5->setText(QString::number(getpoint));}}

        if(event->key() == Qt::Key_J){
         if(ui->face4->x()>-50 && ui->face4->x()<50){
             ui->face4->hide();
             getpoint++;
          ui->label_5->setText(QString::number(getpoint));}}

         if(event->key() == Qt::Key_K){
          if(ui->face5->x()>-50 && ui->face5->x()<50){
              ui->face5->hide();
              getpoint++;
          ui->label_5->setText(QString::number(getpoint)); }}

          if(event->key() == Qt::Key_K){
           if(ui->face6->x()>-50 && ui->face6->x()<50){
               ui->face6->hide();
               getpoint++;
          ui->label_5->setText(QString::number(getpoint)); }}

           if(event->key() == Qt::Key_J){
            if(ui->face7->x()>-30 && ui->face7->x()<50){
                ui->face7->hide();
                getpoint++;
          ui->label_5->setText(QString::number(getpoint));}}



}
