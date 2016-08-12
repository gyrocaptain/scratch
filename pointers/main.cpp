#include <QtCore/QCoreApplication>

#include <QString>
#include <QDebug>
#include <QTimer>

void delete_reference()
{
    QString* qsp = new QString("asdfasdfasdfasdf");

    qDebug() << "created QString pointer" << (void*)qsp;
    delete qsp;
    qDebug() << "deleted QString pointer" << (void*)qsp;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    delete_reference();

    QTimer::singleShot(1000, &a, SLOT(quit()));
    int status = a.exec();
    return status;

}
