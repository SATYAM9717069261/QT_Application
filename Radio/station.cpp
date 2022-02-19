#include "station.h"

Station::Station(QObject *parent, int chennal, QString name):QObject(parent)
{
    this->chennal=chennal;
    this->name=name;
}
void Station::broadcast(QString message){
    emit send(chennal,name,message);
}
