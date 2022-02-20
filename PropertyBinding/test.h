#ifndef TEST_H
#define TEST_H

#include <QObject>

class Test:public QObject
{
    Q_OBJECT
    QString m_message;
public:
    explicit Test(QObject *parent = nullptr);
    QString message() const;
    void setMessage(const QString &message);
signals: void messageChanged(QString &message);
public: Q_PROPERTY(QString propertyname READ message WRITE setMessage NOTIFY messageChanged);
};

#endif // TEST_H
