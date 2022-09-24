/****************************************************************************
** Meta object code from reading C++ file 'edit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../avtobaza/edit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_edit_t {
    const uint offsetsAndSize[36];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_edit_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_edit_t qt_meta_stringdata_edit = {
    {
QT_MOC_LITERAL(0, 4), // "edit"
QT_MOC_LITERAL(5, 21), // "on_insertAvto_clicked"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 20), // "on_insertAZS_clicked"
QT_MOC_LITERAL(49, 25), // "on_insertAvtobaza_clicked"
QT_MOC_LITERAL(75, 3), // "del"
QT_MOC_LITERAL(79, 5), // "table"
QT_MOC_LITERAL(85, 5), // "field"
QT_MOC_LITERAL(91, 5), // "value"
QT_MOC_LITERAL(97, 21), // "on_changeAvto_clicked"
QT_MOC_LITERAL(119, 20), // "on_changeAZS_clicked"
QT_MOC_LITERAL(140, 25), // "on_changeAvtobaza_clicked"
QT_MOC_LITERAL(166, 18), // "on_delAvto_clicked"
QT_MOC_LITERAL(185, 17), // "on_delAZS_clicked"
QT_MOC_LITERAL(203, 22), // "on_delAvtobaza_clicked"
QT_MOC_LITERAL(226, 22), // "on_outFileAvto_clicked"
QT_MOC_LITERAL(249, 21), // "on_outFileAZS_clicked"
QT_MOC_LITERAL(271, 26) // "on_outFileAvtobaza_clicked"

    },
    "edit\0on_insertAvto_clicked\0\0"
    "on_insertAZS_clicked\0on_insertAvtobaza_clicked\0"
    "del\0table\0field\0value\0on_changeAvto_clicked\0"
    "on_changeAZS_clicked\0on_changeAvtobaza_clicked\0"
    "on_delAvto_clicked\0on_delAZS_clicked\0"
    "on_delAvtobaza_clicked\0on_outFileAvto_clicked\0"
    "on_outFileAZS_clicked\0on_outFileAvtobaza_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_edit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    3,   95,    2, 0x08,    4 /* Private */,
       9,    0,  102,    2, 0x08,    8 /* Private */,
      10,    0,  103,    2, 0x08,    9 /* Private */,
      11,    0,  104,    2, 0x08,   10 /* Private */,
      12,    0,  105,    2, 0x08,   11 /* Private */,
      13,    0,  106,    2, 0x08,   12 /* Private */,
      14,    0,  107,    2, 0x08,   13 /* Private */,
      15,    0,  108,    2, 0x08,   14 /* Private */,
      16,    0,  109,    2, 0x08,   15 /* Private */,
      17,    0,  110,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
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

void edit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<edit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_insertAvto_clicked(); break;
        case 1: _t->on_insertAZS_clicked(); break;
        case 2: _t->on_insertAvtobaza_clicked(); break;
        case 3: _t->del((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->on_changeAvto_clicked(); break;
        case 5: _t->on_changeAZS_clicked(); break;
        case 6: _t->on_changeAvtobaza_clicked(); break;
        case 7: _t->on_delAvto_clicked(); break;
        case 8: _t->on_delAZS_clicked(); break;
        case 9: _t->on_delAvtobaza_clicked(); break;
        case 10: _t->on_outFileAvto_clicked(); break;
        case 11: _t->on_outFileAZS_clicked(); break;
        case 12: _t->on_outFileAvtobaza_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject edit::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_edit.offsetsAndSize,
    qt_meta_data_edit,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_edit_t
, QtPrivate::TypeAndForceComplete<edit, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *edit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_edit.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int edit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
