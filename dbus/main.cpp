#include <QDBusConnection>
#include "hello.h"
#include "hello_adaptor.h"

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    Hello hello;
    new HelloAdaptor(&hello);

    QDBusConnection conn = QDBusConnection::sessionBus();
    conn.registerService("fi.inz.hello");
    conn.registerObject("/", &hello);

    return app.exec();
}
