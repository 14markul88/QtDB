/****************************************************************************
** Meta object code from reading C++ file 'director.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../avtobaza/director.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'director.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_director_t {
    const uint offsetsAndSize[16];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_director_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_director_t qt_meta_stringdata_director = {
    {
QT_MOC_LITERAL(0, 8), // "director"
QT_MOC_LITERAL(9, 22), // "on_certainAvto_clicked"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 23), // "on_sedanDTcount_clicked"
QT_MOC_LITERAL(57, 22), // "on_sortAbsense_clicked"
QT_MOC_LITERAL(80, 26), // "on_maxAvtoAZSCount_clicked"
QT_MOC_LITERAL(107, 26), // "on_certainSortBenz_clicked"
QT_MOC_LITERAL(134, 23) // "on_maxAvtoCount_clicked"

    },
    "director\0on_certainAvto_clicked\0\0"
    "on_sedanDTcount_clicked\0on_sortAbsense_clicked\0"
    "on_maxAvtoAZSCount_clicked\0"
    "on_certainSortBenz_clicked\0"
    "on_maxAvtoCount_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_director[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void director::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<director *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_certainAvto_clicked(); break;
        case 1: _t->on_sedanDTcount_clicked(); break;
        case 2: _t->on_sortAbsense_clicked(); break;
        case 3: _t->on_maxAvtoAZSCount_clicked(); break;
        case 4: _t->on_certainSortBenz_clicked(); break;
        case 5: _t->on_maxAvtoCount_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject director::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_director.offsetsAndSize,
    qt_meta_data_director,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_director_t
, QtPrivate::TypeAndForceComplete<director, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *director::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *director::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_director.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int director::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
