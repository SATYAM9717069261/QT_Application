#include "source.h"

Source::Source(QObject *parent)
    : QObject{parent}
{

}
void Source::test(){
    emit mysignal("Hello World");
}
