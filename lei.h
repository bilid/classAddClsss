#ifndef LEI_H
#define LEI_H

#include <QObject>

class lei : public QObject
{
    Q_OBJECT
public:
    explicit lei(QObject *parent = 0);

signals:

public slots:
    void gai(QString hh);
};

#endif // LEI_H
