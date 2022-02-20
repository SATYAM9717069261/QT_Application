#include "watcher.h"
#include <QDebug>
Watcher::Watcher(QObject *parent)
{

}

void Watcher::messageChanged(QString message)
{
    qInfo()<<"Message Changed=> "<<message;
}
