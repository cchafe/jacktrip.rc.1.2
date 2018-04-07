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
    void record(double d, bool newline, bool toInt);
public slots:
    void recordInterpacketInterval(int i) { record(i, true, true); }
    void recordInterpacketIntervalDouble(double d) { record(d, true, false); }
    void recordSeqNum(int i) { record(i, false, true); }
};

// borrowing from https://github.com/rsmz/qnanotimer
class QNanoTimer : public QObject
{
    Q_OBJECT
public:

    void start()
    {
        clock_gettime(CLOCK_REALTIME, & mStart);
    }

    int elapsedNanos()
    {
        struct timespec now;
        clock_gettime(CLOCK_REALTIME, & now);
        mElapsedNanos =
                (now.tv_sec  - mStart.tv_sec) * 1e9 +
                (now.tv_nsec - mStart.tv_nsec);
        return mElapsedNanos;
    }
private:
    struct timespec mStart;
    int mElapsedNanos;
};

#endif // HUBLOGGER_H
