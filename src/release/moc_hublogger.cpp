/****************************************************************************
** Meta object code from reading C++ file 'hublogger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hublogger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hublogger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HubLogger_t {
    QByteArrayData data[9];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HubLogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HubLogger_t qt_meta_stringdata_HubLogger = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HubLogger"
QT_MOC_LITERAL(1, 10, 25), // "recordInterpacketInterval"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 1), // "i"
QT_MOC_LITERAL(4, 39, 31), // "recordInterpacketIntervalDouble"
QT_MOC_LITERAL(5, 71, 1), // "d"
QT_MOC_LITERAL(6, 73, 18), // "recordThreshDouble"
QT_MOC_LITERAL(7, 92, 19), // "recordSecondsDouble"
QT_MOC_LITERAL(8, 112, 12) // "recordSeqNum"

    },
    "HubLogger\0recordInterpacketInterval\0"
    "\0i\0recordInterpacketIntervalDouble\0d\0"
    "recordThreshDouble\0recordSecondsDouble\0"
    "recordSeqNum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HubLogger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void HubLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HubLogger *_t = static_cast<HubLogger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recordInterpacketInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->recordInterpacketIntervalDouble((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->recordThreshDouble((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->recordSecondsDouble((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->recordSeqNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HubLogger::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_HubLogger.data,
      qt_meta_data_HubLogger,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HubLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HubLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HubLogger.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int HubLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_QNanoTimer_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNanoTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNanoTimer_t qt_meta_stringdata_QNanoTimer = {
    {
QT_MOC_LITERAL(0, 0, 10) // "QNanoTimer"

    },
    "QNanoTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNanoTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QNanoTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QNanoTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNanoTimer.data,
      qt_meta_data_QNanoTimer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QNanoTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNanoTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNanoTimer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QNanoTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
