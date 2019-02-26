/****************************************************************************
** Meta object code from reading C++ file 'governancelist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/governancelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'governancelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GovernanceList_t {
    QByteArrayData data[12];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GovernanceList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GovernanceList_t qt_meta_stringdata_GovernanceList = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GovernanceList"
QT_MOC_LITERAL(1, 15, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "updateGobjects"
QT_MOC_LITERAL(4, 45, 15), // "showContextMenu"
QT_MOC_LITERAL(5, 61, 29), // "on_filterLineEdit_textChanged"
QT_MOC_LITERAL(6, 91, 11), // "strFilterIn"
QT_MOC_LITERAL(7, 103, 27), // "on_GovernanceButton_clicked"
QT_MOC_LITERAL(8, 131, 23), // "on_UpdateButton_clicked"
QT_MOC_LITERAL(9, 155, 24), // "on_voteYesButton_clicked"
QT_MOC_LITERAL(10, 180, 23), // "on_voteNoButton_clicked"
QT_MOC_LITERAL(11, 204, 28) // "on_voteAbstainButton_clicked"

    },
    "GovernanceList\0doubleClicked\0\0"
    "updateGobjects\0showContextMenu\0"
    "on_filterLineEdit_textChanged\0strFilterIn\0"
    "on_GovernanceButton_clicked\0"
    "on_UpdateButton_clicked\0"
    "on_voteYesButton_clicked\0"
    "on_voteNoButton_clicked\0"
    "on_voteAbstainButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GovernanceList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   62,    2, 0x0a /* Public */,
       4,    1,   63,    2, 0x08 /* Private */,
       5,    1,   66,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GovernanceList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GovernanceList *_t = static_cast<GovernanceList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->updateGobjects(); break;
        case 2: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->on_filterLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_GovernanceButton_clicked(); break;
        case 5: _t->on_UpdateButton_clicked(); break;
        case 6: _t->on_voteYesButton_clicked(); break;
        case 7: _t->on_voteNoButton_clicked(); break;
        case 8: _t->on_voteAbstainButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GovernanceList::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GovernanceList::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GovernanceList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GovernanceList.data,
      qt_meta_data_GovernanceList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GovernanceList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GovernanceList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GovernanceList.stringdata0))
        return static_cast<void*>(const_cast< GovernanceList*>(this));
    return QWidget::qt_metacast(_clname);
}

int GovernanceList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GovernanceList::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
