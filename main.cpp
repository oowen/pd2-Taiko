#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include<QFont>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

 /*   QPushButton * btn = new QPushButton("Close");
    btn->setWindowTitle("signal&slot");
    btn->setFont(QFont("courier",18,QFont::Bold));
    btn->resize(250,50);

    QObject::connect(btn,SIGNAL(clicked()),&app,SLOT(quit()));
    btn->show();
*/
    MainWindow w;
    w.show();



    return app.exec();
}
