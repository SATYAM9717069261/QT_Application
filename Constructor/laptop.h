#ifndef LAPTOP_H
#define LAPTOP_H
#include<QObject>
class Laptop:public QObject
{
    Q_OBJECT
public:
    explicit Laptop(QObject *parent = nullptr,QString name="");
    ~Laptop();
    //Variables
    int weight;
    QString name;
    //methods
    int asKilo();
    void test();
};

#endif // LAPTOP_H
