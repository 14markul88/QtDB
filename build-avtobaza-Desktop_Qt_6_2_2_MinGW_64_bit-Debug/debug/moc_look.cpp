/****************************************************************************
** Meta object code from reading C++ file 'look.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../avtobaza/look.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'look.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_look_t {
    const uint offsetsAndSize[42];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_look_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_look_t qt_meta_stringdata_look = {
    {
QT_MOC_LITERAL(0, 4), // "look"
QT_MOC_LITERAL(5, 4), // "view"
QT_MOC_LITERAL(10, 0), // ""
QT_MOC_LITERAL(11, 5), // "table"
QT_MOC_LITERAL(17, 6), // "inFile"
QT_MOC_LITERAL(24, 5), // "print"
QT_MOC_LITERAL(30, 2), // "th"
QT_MOC_LITERAL(33, 4), // "sort"
QT_MOC_LITERAL(38, 5), // "field"
QT_MOC_LITERAL(44, 19), // "on_viewAvto_clicked"
QT_MOC_LITERAL(64, 18), // "on_viewAZS_clicked"
QT_MOC_LITERAL(83, 23), // "on_viewAvtobaza_clicked"
QT_MOC_LITERAL(107, 25), // "on_inFileAvtobaza_clicked"
QT_MOC_LITERAL(133, 21), // "on_inFileAvto_clicked"
QT_MOC_LITERAL(155, 20), // "on_inFileAZS_clicked"
QT_MOC_LITERAL(176, 20), // "on_printAvto_clicked"
QT_MOC_LITERAL(197, 19), // "on_printAZS_clicked"
QT_MOC_LITERAL(217, 24), // "on_printAvtobaza_clicked"
QT_MOC_LITERAL(242, 19), // "on_sortAvto_clicked"
QT_MOC_LITERAL(262, 18), // "on_sortAZS_clicked"
QT_MOC_LITERAL(281, 23) // "on_sortAvtobaza_clicked"

    },
    "look\0view\0\0table\0inFile\0print\0th\0sort\0"
    "field\0on_viewAvto_clicked\0on_viewAZS_clicked\0"
    "on_viewAvtobaza_clicked\0"
    "on_inFileAvtobaza_clicked\0"
    "on_inFileAvto_clicked\0on_inFileAZS_clicked\0"
    "on_printAvto_clicked\0on_printAZS_clicked\0"
    "on_printAvtobaza_clicked\0on_sortAvto_clicked\0"
    "on_sortAZS_clicked\0on_sortAvtobaza_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_look[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x08,    1 /* Private */,
       4,    1,  113,    2, 0x08,    3 /* Private */,
       5,    2,  116,    2, 0x08,    5 /* Private */,
       7,    2,  121,    2, 0x08,    8 /* Private */,
       9,    0,  126,    2, 0x08,   11 /* Private */,
      10,    0,  127,    2, 0x08,   12 /* Private */,
      11,    0,  128,    2, 0x08,   13 /* Private */,
      12,    0,  129,    2, 0x08,   14 /* Private */,
      13,    0,  130,    2, 0x08,   15 /* Private */,
      14,    0,  131,    2, 0x08,   16 /* Private */,
      15,    0,  132,    2, 0x08,   17 /* Private */,
      16,    0,  133,    2, 0x08,   18 /* Private */,
      17,    0,  134,    2, 0x08,   19 /* Private */,
      18,    0,  135,    2, 0x08,   20 /* Private */,
      19,    0,  136,    2, 0x08,   21 /* Private */,
      20,    0,  137,    2, 0x08,   22 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void look::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<look *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->view((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->inFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->print((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->sort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->on_viewAvto_clicked(); break;
        case 5: _t->on_viewAZS_clicked(); break;
        case 6: _t->on_viewAvtobaza_clicked(); break;
        case 7: _t->on_inFileAvtobaza_clicked(); break;
        case 8: _t->on_inFileAvto_clicked(); break;
        case 9: _t->on_inFileAZS_clicked(); break;
        case 10: _t->on_printAvto_clicked(); break;
        case 11: _t->on_printAZS_clicked(); break;
        case 12: _t->on_printAvtobaza_clicked(); break;
        case 13: _t->on_sortAvto_clicked(); break;
        case 14: _t->on_sortAZS_clicked(); break;
        case 15: _t->on_sortAvtobaza_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject look::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_look.offsetsAndSize,
    qt_meta_data_look,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_look_t
, QtPrivate::TypeAndForceComplete<look, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *look::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *look::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_look.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int look::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
