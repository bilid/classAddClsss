#include "leiii.h"

leiii::leiii(QPushButton *b,QWidget *parent) : QMainWindow(parent)
{
    this->bk=b;
}

void leiii::gai(QString hh)
{
   bk->setText(hh);
   bk->show();
    qDebug()<<hh;
}
