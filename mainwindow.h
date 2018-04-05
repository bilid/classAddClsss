#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include"leiii.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString string;

    leiii * my;

private slots:
    void fashe();


    void on_pushButton_clicked();

signals:
    void sendtext(QString string);

private:
    Ui::MainWindow *ui;
        int a;
};

#endif // MAINWINDOW_H
