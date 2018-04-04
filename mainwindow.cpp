#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    my=new leiii(ui->pushButton_2);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_clicked()));
    connect(this,SIGNAL(sendtext(QString)),my,SLOT(gai( QString )));
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
