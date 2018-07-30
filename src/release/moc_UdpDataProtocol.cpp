/****************************************************************************
** Meta object code from reading C++ file 'UdpDataProtocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UdpDataProtocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UdpDataProtocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UdpDataProtocol_t {
    QByteArrayData data[17];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UdpDataProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UdpDataProtocol_t qt_meta_stringdata_UdpDataProtocol = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UdpDataProtocol"
QT_MOC_LITERAL(1, 16, 20), // "signalWaitingTooLong"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "wait_msec"
QT_MOC_LITERAL(4, 48, 19), // "interpacketInterval"
QT_MOC_LITERAL(5, 68, 8), // "ipi_msec"
QT_MOC_LITERAL(6, 77, 25), // "interpacketIntervalDouble"
QT_MOC_LITERAL(7, 103, 8), // "ipi_nsec"
QT_MOC_LITERAL(8, 112, 10), // "halfThresh"
QT_MOC_LITERAL(9, 123, 1), // "v"
QT_MOC_LITERAL(10, 125, 10), // "fullThresh"
QT_MOC_LITERAL(11, 136, 10), // "runningAvg"
QT_MOC_LITERAL(12, 147, 13), // "secondsDouble"
QT_MOC_LITERAL(13, 161, 4), // "secs"
QT_MOC_LITERAL(14, 166, 6), // "seqNum"
QT_MOC_LITERAL(15, 173, 7), // "seq_num"
QT_MOC_LITERAL(16, 181, 27) // "printUdpWaitedTooLong30msec"

    },
    "UdpDataProtocol\0signalWaitingTooLong\0"
    "\0wait_msec\0interpacketInterval\0ipi_msec\0"
    "interpacketIntervalDouble\0ipi_nsec\0"
    "halfThresh\0v\0fullThresh\0runningAvg\0"
    "secondsDouble\0secs\0seqNum\0seq_num\0"
    "printUdpWaitedTooLong30msec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UdpDataProtocol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,
      10,    1,   71,    2, 0x06 /* Public */,
      11,    1,   74,    2, 0x06 /* Public */,
      12,    1,   77,    2, 0x06 /* Public */,
      14,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void UdpDataProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UdpDataProtocol *_t = static_cast<UdpDataProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalWaitingTooLong((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->interpacketInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->interpacketIntervalDouble((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->halfThresh((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->fullThresh((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->runningAvg((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->secondsDouble((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->seqNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->printUdpWaitedTooLong30msec((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UdpDataProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpDataProtocol::signalWaitingTooLong)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UdpDataProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpDataProtocol::interpacketInterval)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UdpDataProtocol::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpDataProtocol::interpacketIntervalDouble)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UdpDataProtocol::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpDataProtocol::halfThresh)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UdpDataProtocol::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpDataProtocol::fullThresh)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UdpDataProtocol::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpDataProtocol::runningAvg)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UdpDataProtocol::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpDataProtocol::secondsDouble)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UdpDataProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpDataProtocol::seqNum)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UdpDataProtocol::staticMetaObject = {
    { &DataProtocol::staticMetaObject, qt_meta_stringdata_UdpDataProtocol.data,
      qt_meta_data_UdpDataProtocol,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UdpDataProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UdpDataProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UdpDataProtocol.stringdata0))
        return static_cast<void*>(this);
    return DataProtocol::qt_metacast(_clname);
}

int UdpDataProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DataProtocol::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void UdpDataProtocol::signalWaitingTooLong(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UdpDataProtocol::interpacketInterval(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UdpDataProtocol::interpacketIntervalDouble(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UdpDataProtocol::halfThresh(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UdpDataProtocol::fullThresh(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UdpDataProtocol::runningAvg(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UdpDataProtocol::secondsDouble(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UdpDataProtocol::seqNum(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
