#include "test.h"

Test::Test(QObject *parent)
{

}

QString Test::message() const{
    return m_message;
}
void Test::setMessage(const QString& message){
    m_message=message;
    emit messageChanged(m_message);
}
