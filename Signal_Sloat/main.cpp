#include <QCoreApplication>
#include <source.h>
#include<destination.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Source mySource;
    Destination mydestination;

    QObject::connect(&mySource,&Source::mysignal,&mydestination,&Destination::mysignal);

    mySource.test();
    return a.exec();
}
