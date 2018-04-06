#ifndef HUBLOGGER_H
#define HUBLOGGER_H

#include <QThread>
#include <QObject>
#include <QDebug>

class HubLogger : public QThread
{
    Q_OBJECT;
public:
    HubLogger(QString name);
    void init();
private:
    QString mLogfileName;
    void recordInt(int i, bool newline);
public slots:
    void recordInterpacketInterval(int i) { recordInt(i, true); }
    void recordSeqNum(int i) { recordInt(i, false); }
};

#endif // HUBLOGGER_H
