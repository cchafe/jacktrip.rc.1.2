#include "hublogger.h"
#include <QFile>

#include "jacktrip_globals.h"
#include "JackTrip.h"

HubLogger::HubLogger(QString name) :
    mLogfileName(name)
{
    //    qDebug() << "logfile:" << mLogfileName; // cout instead of qDebug() for ccrma hosts
    std::cout << "logfile:" << mLogfileName.toStdString() << std::endl;
    init();
}

void HubLogger::init() {
    //first, write output file
    QFile file(mLogfileName);
    //Check for existing file first, and confirm before overwriting
    if (file.exists()) {
        //        qDebug() << "overwriting:" << mLogfileName;
        std::cout << "overwriting:" << mLogfileName.toStdString() << std::endl;
    } else {
        //        qDebug() << "creating:" << mLogfileName;
        std::cout << "creating:" << mLogfileName.toStdString() << std::endl;
    }

    if (!file.open(QIODevice::WriteOnly)) {
        //        qDebug()  << "Cannot open file for writing: "
        //                  << qPrintable(file.errorString());
        std::cout << "Cannot open file for writing: "
                  << QString(file.errorString()).toStdString() << std::endl;
    }

    QTextStream out(&file);
    out << mLogfileName;
    file.close();
    // qDebug() << mLogfileName << " written." << endl;
    std::cout << mLogfileName.toStdString() << " written." << std::endl;
}

void HubLogger::record(double d, bool newline, bool toInt)
{
    //    qDebug() << "rcv"<< ipi_msec;
    QFile file(mLogfileName);
    //Check for existing file first, and confirm before overwriting
    if (file.exists()) {
        //        qDebug() << "appending:" << mLogfileName;
    } else {
        //        qDebug() << "file missing:" << mLogfileName;
        std::cout << "file missing:" << mLogfileName.toStdString() << std::endl;
    }

    if (!file.open(QIODevice::Append)) {
        //        qDebug()  << "Cannot open file for Appending: "
        //                  << qPrintable(file.errorString());
        std::cout << "Cannot open file for Appending: "
                  << QString(file.errorString()).toStdString() << std::endl;
    }

    QTextStream out(&file);
    if (toInt)  out << ((newline)?"\n":"\t") << (int)d;
    else out << ((newline)?"\n":"\t") << d;
    file.close();
}



