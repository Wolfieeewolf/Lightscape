/****************************************************************************
** Meta object code from reading C++ file 'DeviceControlWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../include/devices/DeviceControlWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceControlWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceControlWidget_t {
    QByteArrayData data[16];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceControlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceControlWidget_t qt_meta_stringdata_DeviceControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DeviceControlWidget"
QT_MOC_LITERAL(1, 20, 22), // "deviceSelectionChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "deviceIndex"
QT_MOC_LITERAL(4, 56, 22), // "Lightscape::DeviceType"
QT_MOC_LITERAL(5, 79, 4), // "type"
QT_MOC_LITERAL(6, 84, 20), // "selectionTypeChanged"
QT_MOC_LITERAL(7, 105, 17), // "customDeviceAdded"
QT_MOC_LITERAL(8, 123, 18), // "populateDeviceList"
QT_MOC_LITERAL(9, 142, 19), // "onDeviceTypeChanged"
QT_MOC_LITERAL(10, 162, 5), // "index"
QT_MOC_LITERAL(11, 168, 20), // "onDeviceComboChanged"
QT_MOC_LITERAL(12, 189, 22), // "onSelectionTypeChanged"
QT_MOC_LITERAL(13, 212, 24), // "onAddCustomDeviceClicked"
QT_MOC_LITERAL(14, 237, 25), // "onDeviceAssignmentChanged"
QT_MOC_LITERAL(15, 263, 10) // "isAssigned"

    },
    "DeviceControlWidget\0deviceSelectionChanged\0"
    "\0deviceIndex\0Lightscape::DeviceType\0"
    "type\0selectionTypeChanged\0customDeviceAdded\0"
    "populateDeviceList\0onDeviceTypeChanged\0"
    "index\0onDeviceComboChanged\0"
    "onSelectionTypeChanged\0onAddCustomDeviceClicked\0"
    "onDeviceAssignmentChanged\0isAssigned"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceControlWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       6,    0,   64,    2, 0x06 /* Public */,
       7,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   66,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    3,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4, QMetaType::Bool,   10,    5,   15,

       0        // eod
};

void DeviceControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceControlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceSelectionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Lightscape::DeviceType(*)>(_a[2]))); break;
        case 1: _t->selectionTypeChanged(); break;
        case 2: _t->customDeviceAdded(); break;
        case 3: _t->populateDeviceList(); break;
        case 4: _t->onDeviceTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onDeviceComboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onSelectionTypeChanged(); break;
        case 7: _t->onAddCustomDeviceClicked(); break;
        case 8: _t->onDeviceAssignmentChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Lightscape::DeviceType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceControlWidget::*)(int , Lightscape::DeviceType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceControlWidget::deviceSelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceControlWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceControlWidget::selectionTypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceControlWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceControlWidget::customDeviceAdded)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceControlWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DeviceControlWidget.data,
    qt_meta_data_DeviceControlWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceControlWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DeviceControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void DeviceControlWidget::deviceSelectionChanged(int _t1, Lightscape::DeviceType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceControlWidget::selectionTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DeviceControlWidget::customDeviceAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
