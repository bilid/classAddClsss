#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    my=new leiii(ui->pushButton_2);

    QPushButton *chuanzhi=new QPushButton(this);
     my->channgeint(a);

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_clicked()));
    connect(this,SIGNAL(sendtext(QString)),my,SLOT(gai( QString )));
        qDebug() << a;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fashe()
{

}



void MainWindow::on_pushButton_clicked()
{
    string=ui->pushButton->text();
   emit sendtext(string);
}
