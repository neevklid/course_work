/****************************************************************************
** Meta object code from reading C++ file 'usl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../usl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_usl_t {
    QByteArrayData data[14];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_usl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_usl_t qt_meta_stringdata_usl = {
    {
QT_MOC_LITERAL(0, 0, 3), // "usl"
QT_MOC_LITERAL(1, 4, 8), // "comeback"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 8), // "nazvanie"
QT_MOC_LITERAL(4, 23, 6), // "QFile&"
QT_MOC_LITERAL(5, 30, 8), // "ful_test"
QT_MOC_LITERAL(6, 39, 6), // "gomain"
QT_MOC_LITERAL(7, 46, 5), // "dores"
QT_MOC_LITERAL(8, 52, 1), // "k"
QT_MOC_LITERAL(9, 54, 4), // "name"
QT_MOC_LITERAL(10, 59, 3), // "kod"
QT_MOC_LITERAL(11, 63, 5), // "sfile"
QT_MOC_LITERAL(12, 69, 8), // "otpravka"
QT_MOC_LITERAL(13, 78, 11) // "compilation"

    },
    "usl\0comeback\0\0nazvanie\0QFile&\0ful_test\0"
    "gomain\0dores\0k\0name\0kod\0sfile\0otpravka\0"
    "compilation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_usl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       7,    3,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   59,    2, 0x08 /* Private */,
      12,    0,   60,    2, 0x08 /* Private */,
      13,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    8,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void usl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        usl *_t = static_cast<usl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comeback((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QFile(*)>(_a[2]))); break;
        case 1: _t->gomain((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->dores((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->sfile(); break;
        case 4: _t->otpravka(); break;
        case 5: _t->compilation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (usl::*_t)(QString , QFile & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&usl::comeback)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (usl::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&usl::gomain)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (usl::*_t)(int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&usl::dores)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject usl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_usl.data,
      qt_meta_data_usl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *usl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *usl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_usl.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int usl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void usl::comeback(QString _t1, QFile & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void usl::gomain(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void usl::dores(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
