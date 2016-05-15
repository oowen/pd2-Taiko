#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "window1.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void change_status(QString);

private slots:
    void on_pushButton_clicked();
signals:

private:


    Ui::MainWindow *ui;
    window1 *window;
};

#endif // MAINWINDOW_H
