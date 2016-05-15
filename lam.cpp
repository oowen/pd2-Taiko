#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QDebug>
#include <Qpushbutton>
#include <QMessageBox>
#include <QKeyEvent>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    colour = false;

    setObjectName("Openmenu");

    setStyleSheet("#Openmenu{border-image:url(:/man.jpg)}");
    showFullScreen();
    ui->StartButton->setStyleSheet("#StartButton{border-image:url(:/g22o.png)}");
    ui->StartButton->showFullScreen();


    ui->kickA->setStyleSheet("#kickA{border-image:url(:/kickA.png)}");
    ui->kickA->setGeometry(-30,-80,1980,1200);
    ui->kickA->hide();

    ui->kickB->setStyleSheet("#kickB{border-image:url(:/kickB.png)}");
    ui->kickB->setGeometry(-30,-80,1980,1200);
    ui->kickB->hide();

    ui->kickC->setStyleSheet("#kickC{border-image:url(:/kickC.png)}");
    ui->kickC->setGeometry(-30,-80,1980,1200);
    ui->kickC->hide();


    ui->Back->setStyleSheet("#Back{border-image:url(:/back.png)}");
    ui->Back->setGeometry(20,770,300,300);
    ui->Back->hide();


    speed = 10;

    for (i=0;i<10;i++)
    {
       a[i] = (rand() % 5000+1) + 2000;
       j = 0;
       while (j<i)
       {
             while (abs(a[i] - a[j]) < 200)
             {
                a[i] = (rand() % 5000+1) + 2000;
                j = -1;
             }
             j++;
       }
    }

    playtime = 30;
    test = 0;
    connect(ui->StartButton,SIGNAL(clicked()),
            ui->StartButton,SLOT(close()));



}

void MainWindow::MySlot()
{
    for (i=0;i<10;i++)
        a[i] = a[i] - speed;



    QString Score = "Score:";
    Score += QString::number(score);
    ui->label_Score->setText(Score);
    ui->label_Score->setGeometry(1760,130,150,150);
    ui->label_Score->setFont(QFont("Minion Pro Med",20));

    playtime = playtime - (0.01);
    if (playtime<0) playtime = 0;
    QString Second = "Timeleft: ";
    Second += QString::number(playtime);
    ui->Time_label->setText(Second);
    ui->Time_label->setGeometry(1350,960,300,200);
    ui->Time_label->setFont(QFont("Minion Pro Med",20));


    QString Coltext = "Kick 'C' to Open Colour MODE!!!!!!";
    ui->colourtext->setText(Coltext);
    ui->colourtext->setGeometry(700,800,800,500);
    ui->colourtext->setFont(QFont("Minion Pro Med",30));


    if (playtime ==0 && test == 0)
    {
        test = 1;

    QMessageBox::StandardButton rb = QMessageBox::information(NULL, "GameOver!", "Score:" + QString::number(score)  + "\nDo you wanna play again?", QMessageBox::Yes , QMessageBox::No);
        if(rb == QMessageBox::Yes)
        {
            MainWindow *c = new MainWindow();
            c->show();
            close();
        }

        if(rb == QMessageBox::No)
        {
            close();
        }
    }

        if (a[0] < 200)
            ui->face0->setStyleSheet("#face0{border-image:url(:/redx.png)}");
        if (a[1] < 200)
            ui->face1->setStyleSheet("#face1{border-image:url(:/redx.png)}");
        if (a[2] < 200)
            ui->face2->setStyleSheet("#face2{border-image:url(:/redx.png)}");
        if (a[3] < 200)
            ui->face3->setStyleSheet("#face3{border-image:url(:/redx.png)}");
        if (a[4] < 200)
            ui->face4->setStyleSheet("#face4{border-image:url(:/redx.png)}");
        if (a[5] < 200)
            ui->face5->setStyleSheet("#face5{border-image:url(:/redx.png)}");
        if (a[6] < 200)
            ui->face6->setStyleSheet("#face6{border-image:url(:/redx.png)}");
        if (a[7] < 200)
            ui->face7->setStyleSheet("#face7{border-image:url(:/redx.png)}");
        if (a[8] < 200)
            ui->face8->setStyleSheet("#face8{border-image:url(:/redx.png)}");
        if (a[9] < 200)
            ui->face9->setStyleSheet("#face9{border-image:url(:/redx.png)}");




    if (a[0] < 100)
    {
       a[0] = (rand() % 5000+1) + 2000;
       ui->face0->setStyleSheet("#face0{border-image:url(:/face.png)}");
       ui->face0->show();

    k = 1;
    while (k==1)
    {
        k = 0;
        for (j=0;j<10;j++)
        {
           if (abs(a[0]-a[j]) < 300 && j!=0)
               k = 1;
        }
        if (k==1)
        {
            a[0] = (rand() % 5000+1) + 2000;
        }
    }
    }

    if (a[1] < 100)
    {
       a[1] = (rand() % 5000+1) + 2000;
       ui->face1->setStyleSheet("#face1{border-image:url(:/face.png)}");
       ui->face1->show();

       k = 1;
       while (k==1)
       {
           k = 0;
           for (j=0;j<10;j++)
           {
              if (abs(a[1]-a[j]) < 300 && j!=1)
                  k = 1;
           }
           if (k==1)
           {
               a[1] = (rand() % 5000+1) + 2000;
           }
       }

    }

    if (a[2] < 100)
    {
       a[2] = (rand() % 5000+1) + 2000;
       ui->face2->setStyleSheet("#face2{border-image:url(:/face.png)}");
       ui->face2->show();

       k = 1;
       while (k==1)
       {
           k = 0;
           for (j=0;j<10;j++)
           {
              if (abs(a[2]-a[j]) < 300 && j!=2)
                  k = 1;
           }
           if (k==1)
           {
               a[2] = (rand() % 5000+1) + 2000;
           }
       }
    }

    if (a[3] < 100)
    {
       a[3] = (rand() % 5000+1) + 2000;
       ui->face3->setStyleSheet("#face3{border-image:url(:/faceB.png)}");
       ui->face3->show();

       k = 1;
       while (k==1)
       {
           k = 0;
           for (j=0;j<10;j++)
           {
              if (abs(a[3]-a[j]) < 300 && j!=3)
                  k = 1;
           }
           if (k==1)
           {
               a[3] = (rand() % 5000+1) + 2000;
           }
       }
    }

    if (a[4] < 100)
    {
       a[4] = (rand() % 5000+1) + 2000;
       ui->face4->setStyleSheet("#face4{border-image:url(:/faceB.png)}");
       ui->face4->show();

       k = 1;
       while (k==1)
       {
           k = 0;
           for (j=0;j<10;j++)
           {
              if (abs(a[4]-a[j]) < 300&& j!=4)
                  k = 1;
           }
           if (k==1)
           {
               a[4] = (rand() % 5000+1) + 2000;
           }
       }
    }

    if (a[5] < 100)
    {
       a[5] = (rand() % 5000+1) + 2000;
       ui->face5->setStyleSheet("#face5{border-image:url(:/faceB.png)}");
       ui->face5->show();

       k = 1;
       while (k==1)
       {
           k = 0;
           for (j=0;j<10;j++)
           {
              if (abs(a[5]-a[j]) < 300 && j!=5)
                  k = 1;
           }
           if (k==1)
           {
               a[5] = (rand() % 5000+1) + 2000;
           }
       }
    }

    if (a[6] < 100)
    {
       a[6] = (rand() % 5000+1) + 2000;
       ui->face6->setStyleSheet("#face6{border-image:url(:/fatB.png)}");
       ui->face6->show();

       k = 1;
       while (k==1)
       {
           k = 0;
           for (j=0;j<10;j++)
           {
              if (abs(a[6]-a[j]) < 300 && j!=6)
                  k = 1;
           }
           if (k==1)
           {
               a[6] = (rand() % 5000+1) + 2000;
           }
       }
    }

    if (a[7] < 100)
    {
       a[7] = (rand() % 5000+1) + 2000;
       ui->face7->setStyleSheet("#face7{border-image:url(:/fatB.png)}");
       ui->face7->show();

       k = 1;
       while (k==1)
       {
           k = 0;
           for (j=0;j<10;j++)
           {
              if (abs(a[7]-a[j]) < 300 && j!=7)
                  k = 1;
           }
           if (k==1)
           {
               a[7] = (rand() % 5000+1) + 2000;
           }
       }
    }

    if (a[8] < 100)
    {
       a[8] = (rand() % 5000+1) + 2000;
       ui->face8->setStyleSheet("#face8{border-image:url(:/fatB.png)}");
       ui->face8->show();

       k = 1;
       while (k==1)
       {
           k = 0;
           for (j=0;j<10;j++)
           {
              if (abs(a[8]-a[j]) < 300 && j!=8)
                  k = 1;
           }
           if (k==1)
           {
               a[8] = (rand() % 5000+1) + 2000;
           }
       }
    }

    if (a[9] < 100)
    {
       a[9] = (rand() % 5000+1) + 2000;
       ui->face9->setStyleSheet("#face9{border-image:url(:/fatB.png)}");
       ui->face9->show();

       k = 1;
       while (k==1)
       {
           k = 0;

           for (j=0;j<10;j++)
           {
              if (abs(a[9]-a[j]) < 300 && j!=9)
                  k = 1;
           }
           if (k==1)
           {
               a[9] = (rand() % 5000+1) + 2000;
           }
       }
    }

    ui->face0->setGeometry(a[0],250,191,161);
    ui->face1->setGeometry(a[1],250,191,161);
    ui->face2->setGeometry(a[2],250,191,161);
    ui->face3->setGeometry(a[3],250,191,161);
    ui->face4->setGeometry(a[4],250,191,161);
    ui->face5->setGeometry(a[5],250,191,161);
    ui->face6->setGeometry(a[6],250,191,161);
    ui->face7->setGeometry(a[7],250,191,161);
    ui->face8->setGeometry(a[8],250,191,161);
    ui->face9->setGeometry(a[9],250,191,161);
    //ui->kick->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_StartButton_clicked()
{
    ui->Back->show();
    setStyleSheet("#Openmenu{border-image:url(:/interf.jpg)}");
    ui->face0->setStyleSheet("#face0{border-image:url(:/face.png)}");
    ui->face1->setStyleSheet("#face1{border-image:url(:/face.png)}");
    ui->face2->setStyleSheet("#face2{border-image:url(:/face.png)}");
    ui->face3->setStyleSheet("#face3{border-image:url(:/faceB.png)}");
    ui->face4->setStyleSheet("#face4{border-image:url(:/faceB.png)}");
    ui->face5->setStyleSheet("#face5{border-image:url(:/faceB.png)}");
    ui->face6->setStyleSheet("#face6{border-image:url(:/fatB.png)}");
    ui->face7->setStyleSheet("#face7{border-image:url(:/fatB.png)}");
    ui->face8->setStyleSheet("#face8{border-image:url(:/fatB.png)}");
    ui->face9->setStyleSheet("#face9{border-image:url(:/fatB.png)}");

    ui->A->setStyleSheet("#A{border-image:url(:/face.png)}");
    ui->B->setStyleSheet("#B{border-image:url(:/fatB.png)}");
    ui->C->setStyleSheet("#C{border-image:url(:/faceB.png)}");
    ui->A->setGeometry(510,780,191,161);
    ui->B->setGeometry(860,700,191,161);
    ui->C->setGeometry(1200,780,191,161);
    ui->def_A->setText("D");
    ui->def_A->setFont(QFont( "Minion Pro Med" , 40 ,  QFont::Bold) );
    ui->def_B->setText("G");
    ui->def_B->setFont(QFont( "Minion Pro Med" , 40 ,  QFont::Bold) );
    ui->def_C->setText("J");
    ui->def_C->setFont(QFont( "Minion Pro Med" , 40 ,  QFont::Bold) );
    ui->def_A->setGeometry(590,885,191,161);
    ui->def_B->setGeometry(888,800,191,161);
    ui->def_C->setGeometry(1295,885,191,161);

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
    timer->start(speed);

    score = 0;





}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event -> key() == Qt::Key_D)
    {
            if (colour == true)
                    {
                        ui->kickA->show();
                        ui->kickB->hide();
                        ui->kickC->hide();
                    }
            if (a[0] <=430 && a[0] >= 230)
               {score++;ui->face0->hide();}
            if (a[1] <=430 && a[1] >= 230)
               {score++;ui->face1->hide();}
            if (a[2] <=430 && a[2] >= 230)
               {score++;ui->face2->hide();}

    }

    if (event -> key() == Qt::Key_J)
    {
            if (colour == true)
                    {
                        ui->kickA->hide();
                        ui->kickB->show();
                            ui->kickC->hide();
                    }
            if (a[3] <=430 && a[3] >= 230)
               {score++;ui->face3->hide();}
            if (a[4] <=430 && a[4] >= 230)
               {score++;ui->face4->hide();}
            if (a[5] <=430 && a[5] >= 230)
               {score++;ui->face5->hide();}

    }

    if (event -> key() == Qt::Key_G)
    {
            if (colour == true)
                    {
                        ui->kickA->hide();
                        ui->kickB->hide();
                        ui->kickC->show();
                    }

            if (a[6] <=430 && a[6] >= 230)
               {score++; ui->face6->hide();}
            if (a[7] <=430 && a[7] >= 230)
               {score++;ui->face7->hide();}
            if (a[8] <=430 && a[8] >= 230)
               {score++;ui->face8->hide();}
            if (a[9] <=430 && a[9] >= 230)
               {score++;ui->face9->hide();}

    }

    if (event -> key() == Qt::Key_Plus)
    {
        if (speed <= 20)
            speed = speed + 2;
    }

    if (event -> key() == Qt::Key_Minus)
    {
        if (speed >= 10)
             speed = speed - 2;
    }

    if (event -> key() == Qt::Key_C)
    {
        ui->kickA->hide();
        ui->kickB->hide();
        ui->kickC->hide();
        colour = !colour;
    }
}

void MainWindow::on_Back_clicked()
{
    MainWindow *c = new MainWindow();
    c->show();
    close();
}
