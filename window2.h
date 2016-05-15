#ifndef FORM_H
#define FORM_H
#include"window1.h"

#include <QWidget>


namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();
    void showscore(int);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Form *ui;
};

#endif // FORM_H
