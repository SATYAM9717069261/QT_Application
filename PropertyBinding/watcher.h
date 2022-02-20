#ifndef WATCHER_H
#define WATCHER_H

#include <QObject>

class Watcher:public QObject
{
    Q_OBJECT
public:
    explicit Watcher(QObject *parent=nullptr);
public slots:
    void messageChanged(QString message);
};

#endif // WATCHER_H
