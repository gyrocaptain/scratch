#include <QtCore/QCoreApplication>

#include <QString>
#include <QDebug>
#include <QTimer>

void modulo()
{
    qDebug() << __func__ << "start";
    for (int i=0;i<10;++i) {
        int mod = i % 2;
        QString mod_s;
        mod_s.setNum(mod);

        qDebug() << "mod:" << mod << "mod_s:" << mod_s;
    }
    qDebug() << __func__ << "exit";
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    modulo();

    QTimer::singleShot(1000, &a, SLOT(quit()));
    int status = a.exec();
    return status;

}
