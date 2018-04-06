#include "hublogger.h"
#include <QFile>

HubLogger::HubLogger(QString name) :
    mLogfileName(name)
{
    qDebug() << "logfile:" << mLogfileName;
    init();
}
void HubLogger::init() {
    //Write output file
    QFile file(mLogfileName);
    //Check for existing file first, and confirm before overwriting
    if (file.exists()) {
        qDebug() << "overwriting:" << mLogfileName;
    } else {
        qDebug() << "creating:" << mLogfileName;
    }

    if (!file.open(QIODevice::WriteOnly)) {
        qDebug()  << "Cannot open file for writing: "
                  << qPrintable(file.errorString());
    }

    QTextStream out(&file);
    out << mLogfileName;
    file.close();
    qDebug() << mLogfileName << " written." << endl;
}

void HubLogger::recordInt(int i, bool newline)
{
    //    qDebug() << "rcv"<< ipi_msec;
    QFile file(mLogfileName);
    //Check for existing file first, and confirm before overwriting
    if (file.exists()) {
        //        qDebug() << "appending:" << mLogfileName;
    } else {
        qDebug() << "file missing:" << mLogfileName;
    }

    if (!file.open(QIODevice::Append)) {
        qDebug()  << "Cannot open file for Appending: "
                  << qPrintable(file.errorString());
    }

    QTextStream out(&file);
    out << ((newline)?"\n":"\t") << i;
    file.close();
}



