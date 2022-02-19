#include <QCoreApplication>
#include<radio.h>
#include<station.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Radio boombox;
    Station* channels[3];
    channels[0]=new Station(&boombox,94,"Rock on");
    channels[1]=new Station(&boombox,24,"Hip Hop");
    channels[2]=new Station(&boombox,44,"Classic");
    boombox.connect(&boombox,&Radio::quit,&a,&QCoreApplication::quit,Qt::QueuedConnection);

    do{
        qInfo()<<"Enter ON,OF,TEST or QUIT";
        QTextStream qtin(stdin);
        QString line=qtin.readLine().trimmed().toUpper();
        if(line == "ON"){
            qInfo()<<"Turn ON RADIO";
            for(int i=0;i<3;i++){
                Station* channel= channels[i];
                boombox.connect(channel,&Station::send,&boombox,&Radio::listen);
            }
        }

        if(line == "OFF"){
            qInfo()<<"Turn OFF RADIO";
            for(int i=0;i<3;i++){
                Station* channel= channels[i];
                boombox.disconnect(channel,&Station::send,&boombox,&Radio::listen);
            }
        }

        if(line == "TEST"){
            qInfo()<<"BROADCAST SIGNAL";
            for(int i=0;i<3;i++){
                Station* channel= channels[i];
                channel->broadcast("LIVE");
            }
            qInfo()<<"TESTING COMPLETE";
        }
        if(line =="QUIT"){
            qInfo()<<"Quiting";
            emit boombox.quit();
            break;
        }
    }while(true);
    return a.exec();
}
