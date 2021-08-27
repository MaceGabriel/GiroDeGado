/****************************************************************************
** Meta object code from reading C++ file 'cattlemanagementscreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../gui/entity/cattlemanagementscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cattlemanagementscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CattleManagementScreen_t {
    const uint offsetsAndSize[14];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CattleManagementScreen_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CattleManagementScreen_t qt_meta_stringdata_CattleManagementScreen = {
    {
QT_MOC_LITERAL(0, 22), // "CattleManagementScreen"
QT_MOC_LITERAL(23, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 25), // "on_registerButton_clicked"
QT_MOC_LITERAL(72, 22), // "on_queryButton_clicked"
QT_MOC_LITERAL(95, 23), // "on_updateButton_clicked"
QT_MOC_LITERAL(119, 23) // "on_removeButton_clicked"

    },
    "CattleManagementScreen\0on_backButton_clicked\0"
    "\0on_registerButton_clicked\0"
    "on_queryButton_clicked\0on_updateButton_clicked\0"
    "on_removeButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CattleManagementScreen[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    0 /* Private */,
       3,    0,   45,    2, 0x08,    1 /* Private */,
       4,    0,   46,    2, 0x08,    2 /* Private */,
       5,    0,   47,    2, 0x08,    3 /* Private */,
       6,    0,   48,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CattleManagementScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CattleManagementScreen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_backButton_clicked(); break;
        case 1: _t->on_registerButton_clicked(); break;
        case 2: _t->on_queryButton_clicked(); break;
        case 3: _t->on_updateButton_clicked(); break;
        case 4: _t->on_removeButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject CattleManagementScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CattleManagementScreen.offsetsAndSize,
    qt_meta_data_CattleManagementScreen,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CattleManagementScreen_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CattleManagementScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CattleManagementScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CattleManagementScreen.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CattleManagementScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
