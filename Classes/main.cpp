#include <QCoreApplication>
#include "animal.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Animal cat;
    Animal dog;
    return a.exec();
}
