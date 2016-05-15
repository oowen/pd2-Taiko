#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "timer.h"
#include <QKeyEvent>
#include"window1.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("START");
    ui->pushButton_2->setText("exit");
}

MainWindow::~MainWindow()
{
    delete ui;
    move(ui->centralWidget->x()-10,ui->centralWidget->y());
}

void MainWindow::on_pushButton_clicked()        //當click
{
    window1 *window = new window1;              //*和new連用
    window->show();                             //顯示
    this->hide();                               //當前視窗隱藏




}

void MainWindow::change_status(QString string)
{
  ui->label->setText(string);
}


