#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>

class Source : public QObject
{
    Q_OBJECT
public:
    explicit Source(QObject *parent = nullptr);
    void test();
signals:
    void mysignal(QString mesage);
};

#endif // SOURCE_H
