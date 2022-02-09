#include "animal.h"
#include <QDebug>
Animal::Animal(QObject *parent) : QObject{parent}{
    qDebug()<<this<<" Constructed";
}
