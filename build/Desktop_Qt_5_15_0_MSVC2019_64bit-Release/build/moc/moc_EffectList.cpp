/****************************************************************************
** Meta object code from reading C++ file 'EffectList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../include/effects/EffectList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EffectList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Lightscape__EffectList_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lightscape__EffectList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lightscape__EffectList_t qt_meta_stringdata_Lightscape__EffectList = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Lightscape::EffectList"
QT_MOC_LITERAL(1, 23, 11), // "effectAdded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "EffectInfo"
QT_MOC_LITERAL(4, 47, 4), // "info"
QT_MOC_LITERAL(5, 52, 13), // "effectRemoved"
QT_MOC_LITERAL(6, 66, 8), // "effectId"
QT_MOC_LITERAL(7, 75, 14) // "effectsCleared"

    },
    "Lightscape::EffectList\0effectAdded\0\0"
    "EffectInfo\0info\0effectRemoved\0effectId\0"
    "effectsCleared"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lightscape__EffectList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       7,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void Lightscape::EffectList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EffectList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->effectAdded((*reinterpret_cast< const EffectInfo(*)>(_a[1]))); break;
        case 1: _t->effectRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->effectsCleared(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EffectList::*)(const EffectInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EffectList::effectAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EffectList::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EffectList::effectRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EffectList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EffectList::effectsCleared)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Lightscape::EffectList::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Lightscape__EffectList.data,
    qt_meta_data_Lightscape__EffectList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Lightscape::EffectList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lightscape::EffectList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lightscape__EffectList.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Lightscape::EffectList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Lightscape::EffectList::effectAdded(const EffectInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Lightscape::EffectList::effectRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Lightscape::EffectList::effectsCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
