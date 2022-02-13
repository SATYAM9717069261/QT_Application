#include "destination.h"
#include <QDebug>
Destination::Destination(QObject *parent)
{

}

void Destination::mysignal(QString message)
{
    qInfo()<<message;
}
