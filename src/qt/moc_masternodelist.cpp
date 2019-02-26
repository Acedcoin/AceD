/****************************************************************************
** Meta object code from reading C++ file 'masternodelist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/masternodelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeList_t {
    QByteArrayData data[20];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeList_t qt_meta_stringdata_MasternodeList = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MasternodeList"
QT_MOC_LITERAL(1, 15, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "updateMyMasternodeInfo"
QT_MOC_LITERAL(4, 53, 8), // "strAlias"
QT_MOC_LITERAL(5, 62, 7), // "strAddr"
QT_MOC_LITERAL(6, 70, 9), // "COutPoint"
QT_MOC_LITERAL(7, 80, 8), // "outpoint"
QT_MOC_LITERAL(8, 89, 16), // "updateMyNodeList"
QT_MOC_LITERAL(9, 106, 6), // "fForce"
QT_MOC_LITERAL(10, 113, 14), // "updateNodeList"
QT_MOC_LITERAL(11, 128, 15), // "showContextMenu"
QT_MOC_LITERAL(12, 144, 29), // "on_filterLineEdit_textChanged"
QT_MOC_LITERAL(13, 174, 11), // "strFilterIn"
QT_MOC_LITERAL(14, 186, 19), // "on_QRButton_clicked"
QT_MOC_LITERAL(15, 206, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(16, 229, 25), // "on_startAllButton_clicked"
QT_MOC_LITERAL(17, 255, 29), // "on_startMissingButton_clicked"
QT_MOC_LITERAL(18, 285, 48), // "on_tableWidgetMyMasternodes_i..."
QT_MOC_LITERAL(19, 334, 23) // "on_UpdateButton_clicked"

    },
    "MasternodeList\0doubleClicked\0\0"
    "updateMyMasternodeInfo\0strAlias\0strAddr\0"
    "COutPoint\0outpoint\0updateMyNodeList\0"
    "fForce\0updateNodeList\0showContextMenu\0"
    "on_filterLineEdit_textChanged\0strFilterIn\0"
    "on_QRButton_clicked\0on_startButton_clicked\0"
    "on_startAllButton_clicked\0"
    "on_startMissingButton_clicked\0"
    "on_tableWidgetMyMasternodes_itemSelectionChanged\0"
    "on_UpdateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   82,    2, 0x0a /* Public */,
       8,    1,   89,    2, 0x0a /* Public */,
       8,    0,   92,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   93,    2, 0x0a /* Public */,
      11,    1,   94,    2, 0x08 /* Private */,
      12,    1,   97,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeList *_t = static_cast<MasternodeList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->updateMyMasternodeInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const COutPoint(*)>(_a[3]))); break;
        case 2: _t->updateMyNodeList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateMyNodeList(); break;
        case 4: _t->updateNodeList(); break;
        case 5: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->on_filterLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_QRButton_clicked(); break;
        case 8: _t->on_startButton_clicked(); break;
        case 9: _t->on_startAllButton_clicked(); break;
        case 10: _t->on_startMissingButton_clicked(); break;
        case 11: _t->on_tableWidgetMyMasternodes_itemSelectionChanged(); break;
        case 12: _t->on_UpdateButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MasternodeList::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MasternodeList::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MasternodeList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeList.data,
      qt_meta_data_MasternodeList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MasternodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeList.stringdata0))
        return static_cast<void*>(const_cast< MasternodeList*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MasternodeList::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
