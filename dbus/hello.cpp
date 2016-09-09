#include <QObject>
#include "hello.h"
#include "hello_adaptor.h"

Hello::Hello(QObject *parent) :
    QObject(parent)
{
}

Hello::~Hello()
{
}

QString Hello::hello(const QString &name)
{
    return "Hello, " + name;
}
