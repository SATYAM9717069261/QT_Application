#include "test.h"

Test::Test(QObject *parent)
{
    connect(&m_timer,&QTimer::timeout,this,&Test::timeout);
    count =0;
    m_timer.setInterval(1000);
    m_timer.start();

}

void Test::timeout()
{
    qInfo()<<"TEST";
    count++;
    if(count >= 5){
        m_timer.stop();
    }
}
