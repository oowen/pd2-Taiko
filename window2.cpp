#include "window2.h"
#include "ui_window2.h"
#include"window1.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

}
void Form::showscore(int score) {
    ui->label_2->setText(QString::number(score));
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_2_clicked()
{
    this->close();
}

void Form::on_pushButton_clicked()
{
    window1 *window = new window1;              //*和new連用
    window->show();                             //顯示
    this->hide();
}
