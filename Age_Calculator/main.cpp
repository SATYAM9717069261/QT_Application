#include <QCoreApplication>
#include "agecalc.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    AgeCalc satyam;
    satyam.setName("Satyam Mandal");
    satyam.setAge(23);
    qInfo()<<satyam.name()<<"=>"<<satyam.age();

    return a.exec();
}
