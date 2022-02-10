#include "laptop.h"
#include <QDebug>
Laptop::Laptop(QObject *parent,QString name):QObject(parent) {
    this->name=name;
    qInfo()<<this<<" Constructor";
}
Laptop::~Laptop(){
    qInfo()<<this<<" Destroy";
}
int Laptop::asKilo(){
    return this->weight *12;
}

void Laptop::test(){
    qInfo()<<this<<"name=>"<<name <<"Kilo=>"<<asKilo();
}
