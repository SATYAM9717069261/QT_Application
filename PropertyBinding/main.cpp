#include <QCoreApplication>
#include <test.h>
#include<watcher.h>
#include<QVariant>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test test;
    Watcher watcher;
    QObject::connect(&test, &Test::messageChanged,&watcher,&Watcher::messageChanged);
    test.setProperty("propertyname",QVariant("Hello World"));
    test.setMessage("Testing Setter");
    return a.exec();
}
