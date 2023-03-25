/****************************************************************************
** Meta object code from reading C++ file 'DataDirWnd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../DataDirWnd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataDirWnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataDirWnd_t {
    QByteArrayData data[13];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataDirWnd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataDirWnd_t qt_meta_stringdata_DataDirWnd = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DataDirWnd"
QT_MOC_LITERAL(1, 11, 6), // "PEData"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "axyPE*"
QT_MOC_LITERAL(4, 26, 4), // "Init"
QT_MOC_LITERAL(5, 31, 9), // "EXPORTTAB"
QT_MOC_LITERAL(6, 41, 10), // "IMPORTSTAB"
QT_MOC_LITERAL(7, 52, 6), // "RESTAB"
QT_MOC_LITERAL(8, 59, 7), // "RELOCAL"
QT_MOC_LITERAL(9, 67, 9), // "DEBUGINFO"
QT_MOC_LITERAL(10, 77, 3), // "TLS"
QT_MOC_LITERAL(11, 81, 15), // "DelayIMPORTStab"
QT_MOC_LITERAL(12, 97, 4) // "SAVE"

    },
    "DataDirWnd\0PEData\0\0axyPE*\0Init\0EXPORTTAB\0"
    "IMPORTSTAB\0RESTAB\0RELOCAL\0DEBUGINFO\0"
    "TLS\0DelayIMPORTStab\0SAVE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataDirWnd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   67,    2, 0x0a /* Public */,
       5,    0,   70,    2, 0x0a /* Public */,
       6,    0,   71,    2, 0x0a /* Public */,
       7,    0,   72,    2, 0x0a /* Public */,
       8,    0,   73,    2, 0x0a /* Public */,
       9,    0,   74,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x0a /* Public */,
      11,    0,   76,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DataDirWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataDirWnd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PEData((*reinterpret_cast< axyPE*(*)>(_a[1]))); break;
        case 1: _t->Init((*reinterpret_cast< axyPE*(*)>(_a[1]))); break;
        case 2: _t->EXPORTTAB(); break;
        case 3: _t->IMPORTSTAB(); break;
        case 4: _t->RESTAB(); break;
        case 5: _t->RELOCAL(); break;
        case 6: _t->DEBUGINFO(); break;
        case 7: _t->TLS(); break;
        case 8: _t->DelayIMPORTStab(); break;
        case 9: _t->SAVE(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataDirWnd::*)(axyPE * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataDirWnd::PEData)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataDirWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DataDirWnd.data,
    qt_meta_data_DataDirWnd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataDirWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataDirWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataDirWnd.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DataDirWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DataDirWnd::PEData(axyPE * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
