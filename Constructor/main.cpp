#include <QCoreApplication>
#include "laptop.h"
void test(Laptop &machine){
    machine.test();
}

void makeLaptop(){
    Laptop dell(nullptr,"DELL");
    Laptop lenovo(nullptr,"Lenovo");
    dell.weight=5;
    lenovo.weight=3;
    test(dell);
    test(lenovo);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    makeLaptop();
    return a.exec();
}
