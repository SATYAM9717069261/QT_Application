#include "agecalc.h"

AgeCalc::AgeCalc(QObject *parent)
    : QObject{parent}
{

}
int AgeCalc::age() const{
    return m_age;
}
void AgeCalc::setAge(int age){
    m_age=age;
}
QString AgeCalc::name() const{
    return m_name;
}
QString AgeCalc::setName(QString name){
    m_name=name;
}
