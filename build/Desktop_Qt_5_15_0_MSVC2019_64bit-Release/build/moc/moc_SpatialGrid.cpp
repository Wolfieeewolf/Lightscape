/****************************************************************************
** Meta object code from reading C++ file 'SpatialGrid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../include/grid/SpatialGrid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpatialGrid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpatialGrid_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpatialGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpatialGrid_t qt_meta_stringdata_SpatialGrid = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SpatialGrid"
QT_MOC_LITERAL(1, 12, 16), // "positionSelected"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "GridPosition"
QT_MOC_LITERAL(4, 43, 3), // "pos"
QT_MOC_LITERAL(5, 47, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 64, 12), // "QPushButton*"
QT_MOC_LITERAL(7, 77, 6), // "button"
QT_MOC_LITERAL(8, 84, 11), // "gridUpdated"
QT_MOC_LITERAL(9, 96, 18), // "assignmentsChanged"
QT_MOC_LITERAL(10, 115, 19), // "userPositionChanged"
QT_MOC_LITERAL(11, 135, 20), // "userPositionRequired"
QT_MOC_LITERAL(12, 156, 7), // "warning"
QT_MOC_LITERAL(13, 164, 17), // "layerLabelChanged"
QT_MOC_LITERAL(14, 182, 5), // "layer"
QT_MOC_LITERAL(15, 188, 8) // "newLabel"

    },
    "SpatialGrid\0positionSelected\0\0"
    "GridPosition\0pos\0selectionChanged\0"
    "QPushButton*\0button\0gridUpdated\0"
    "assignmentsChanged\0userPositionChanged\0"
    "userPositionRequired\0warning\0"
    "layerLabelChanged\0layer\0newLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpatialGrid[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x06 /* Public */,
      10,    1,   59,    2, 0x06 /* Public */,
      11,    1,   62,    2, 0x06 /* Public */,
      13,    2,   65,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,

       0        // eod
};

void SpatialGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpatialGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionSelected((*reinterpret_cast< const GridPosition(*)>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< QPushButton*(*)>(_a[1]))); break;
        case 2: _t->gridUpdated(); break;
        case 3: _t->assignmentsChanged((*reinterpret_cast< const GridPosition(*)>(_a[1]))); break;
        case 4: _t->userPositionChanged((*reinterpret_cast< const GridPosition(*)>(_a[1]))); break;
        case 5: _t->userPositionRequired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->layerLabelChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPushButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpatialGrid::*)(const GridPosition & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpatialGrid::positionSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SpatialGrid::*)(QPushButton * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpatialGrid::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SpatialGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpatialGrid::gridUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SpatialGrid::*)(const GridPosition & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpatialGrid::assignmentsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SpatialGrid::*)(const GridPosition & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpatialGrid::userPositionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SpatialGrid::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpatialGrid::userPositionRequired)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SpatialGrid::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpatialGrid::layerLabelChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpatialGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SpatialGrid.data,
    qt_meta_data_SpatialGrid,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpatialGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpatialGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpatialGrid.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SpatialGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SpatialGrid::positionSelected(const GridPosition & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpatialGrid::selectionChanged(QPushButton * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SpatialGrid::gridUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SpatialGrid::assignmentsChanged(const GridPosition & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SpatialGrid::userPositionChanged(const GridPosition & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SpatialGrid::userPositionRequired(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SpatialGrid::layerLabelChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
