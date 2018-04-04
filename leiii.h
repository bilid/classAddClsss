#ifndef LEIII_H
#define LEIII_H
#include <QMainWindow>
#include <QPushButton>
#include <QtDebug>
class leiii : public QMainWindow
{
    Q_OBJECT
public:
    explicit leiii(QPushButton * b,QWidget *parent = nullptr);

signals:

private:
    QPushButton *bk;
    QPushButton *kk;
public slots:
        void gai(QString hh);
};

#endif // LEIII_H
