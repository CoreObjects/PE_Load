/****************************************************************************
** Meta object code from reading C++ file 'PEMainWnd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../PEMainWnd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PEMainWnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PEMainWnd_t {
    QByteArrayData data[16];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PEMainWnd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PEMainWnd_t qt_meta_stringdata_PEMainWnd = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PEMainWnd"
QT_MOC_LITERAL(1, 10, 4), // "Flag"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 3), // "tzz"
QT_MOC_LITERAL(4, 20, 2), // "PE"
QT_MOC_LITERAL(5, 23, 6), // "axyPE*"
QT_MOC_LITERAL(6, 30, 10), // "ShowHeader"
QT_MOC_LITERAL(7, 41, 19), // "ShowCharacteristics"
QT_MOC_LITERAL(8, 61, 12), // "SetCharaInfo"
QT_MOC_LITERAL(9, 74, 7), // "slotTZZ"
QT_MOC_LITERAL(10, 82, 10), // "SetTZZInfo"
QT_MOC_LITERAL(11, 93, 5), // "nFlag"
QT_MOC_LITERAL(12, 99, 12), // "slot1Section"
QT_MOC_LITERAL(13, 112, 7), // "dataDir"
QT_MOC_LITERAL(14, 120, 10), // "ADDRESSCAL"
QT_MOC_LITERAL(15, 131, 6) // "SAVEPE"

    },
    "PEMainWnd\0Flag\0\0tzz\0PE\0axyPE*\0ShowHeader\0"
    "ShowCharacteristics\0SetCharaInfo\0"
    "slotTZZ\0SetTZZInfo\0nFlag\0slot1Section\0"
    "dataDir\0ADDRESSCAL\0SAVEPE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PEMainWnd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   83,    2, 0x0a /* Public */,
       7,    0,   86,    2, 0x0a /* Public */,
       8,    1,   87,    2, 0x0a /* Public */,
       9,    0,   90,    2, 0x0a /* Public */,
      10,    1,   91,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PEMainWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PEMainWnd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Flag((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tzz((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->PE((*reinterpret_cast< axyPE*(*)>(_a[1]))); break;
        case 3: _t->ShowHeader((*reinterpret_cast< axyPE*(*)>(_a[1]))); break;
        case 4: _t->ShowCharacteristics(); break;
        case 5: _t->SetCharaInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotTZZ(); break;
        case 7: _t->SetTZZInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slot1Section(); break;
        case 9: _t->dataDir(); break;
        case 10: _t->ADDRESSCAL(); break;
        case 11: _t->SAVEPE(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PEMainWnd::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PEMainWnd::Flag)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PEMainWnd::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PEMainWnd::tzz)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PEMainWnd::*)(axyPE * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PEMainWnd::PE)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PEMainWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PEMainWnd.data,
    qt_meta_data_PEMainWnd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PEMainWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEMainWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PEMainWnd.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PEMainWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PEMainWnd::Flag(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PEMainWnd::tzz(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PEMainWnd::PE(axyPE * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
