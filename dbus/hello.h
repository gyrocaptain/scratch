#ifndef HELLO_H
#define HELLO_H

#include <QObject>

class Hello : public QObject
{
    Q_OBJECT

public:
    Hello(QObject *parent = 0);
    virtual ~Hello();

    public slots:
        Q_SCRIPTABLE QString hello(const QString &name);
};

#endif // HELLO_H
