#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo()<<"Enter Your age:";
    int age;
    cin>>age;
    age>17?qInfo()<<"Valid Age for vote  ":qWarning()<<"Not Valid Age";
    return a.exec();
}
