#include "radio.h"

void Radio::listen(int chennal, QString name, QString message)
{
    qInfo()<<chennal <<" "<<message<<" "<<name;
}
