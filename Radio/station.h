#ifndef STATION_H
#define STATION_H

#include<QObject>
class Station:public QObject
{
    Q_OBJECT
public:
    explicit Station(QObject* parent=nullptr, int channel=0, QString name="unknown");
    QString name;
    int chennal;
signals:    void send(int chennal,QString name,QString message);
public slots: void broadcast(QString message);
};

#endif // STATION_H
