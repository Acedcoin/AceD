/****************************************************************************
** Meta object code from reading C++ file 'walletframe.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/walletframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletFrame_t {
    QByteArrayData data[20];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletFrame_t qt_meta_stringdata_WalletFrame = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletFrame"
QT_MOC_LITERAL(1, 12, 24), // "requestedSyncWarningInfo"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(4, 55, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(5, 71, 18), // "gotoMasternodePage"
QT_MOC_LITERAL(6, 90, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(7, 111, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(8, 129, 4), // "addr"
QT_MOC_LITERAL(9, 134, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(10, 153, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(11, 174, 13), // "encryptWallet"
QT_MOC_LITERAL(12, 188, 6), // "status"
QT_MOC_LITERAL(13, 195, 12), // "backupWallet"
QT_MOC_LITERAL(14, 208, 16), // "changePassphrase"
QT_MOC_LITERAL(15, 225, 12), // "unlockWallet"
QT_MOC_LITERAL(16, 238, 10), // "lockWallet"
QT_MOC_LITERAL(17, 249, 20), // "usedSendingAddresses"
QT_MOC_LITERAL(18, 270, 22), // "usedReceivingAddresses"
QT_MOC_LITERAL(19, 293, 23) // "outOfSyncWarningClicked"

    },
    "WalletFrame\0requestedSyncWarningInfo\0"
    "\0gotoOverviewPage\0gotoHistoryPage\0"
    "gotoMasternodePage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0addr\0gotoSignMessageTab\0"
    "gotoVerifyMessageTab\0encryptWallet\0"
    "status\0backupWallet\0changePassphrase\0"
    "unlockWallet\0lockWallet\0usedSendingAddresses\0"
    "usedReceivingAddresses\0outOfSyncWarningClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  110,    2, 0x0a /* Public */,
       4,    0,  111,    2, 0x0a /* Public */,
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    1,  114,    2, 0x0a /* Public */,
       7,    0,  117,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  118,    2, 0x0a /* Public */,
       9,    0,  121,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  122,    2, 0x0a /* Public */,
      10,    0,  125,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  126,    2, 0x0a /* Public */,
      13,    0,  129,    2, 0x0a /* Public */,
      14,    0,  130,    2, 0x0a /* Public */,
      15,    0,  131,    2, 0x0a /* Public */,
      16,    0,  132,    2, 0x0a /* Public */,
      17,    0,  133,    2, 0x0a /* Public */,
      18,    0,  134,    2, 0x0a /* Public */,
      19,    0,  135,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletFrame *_t = static_cast<WalletFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestedSyncWarningInfo(); break;
        case 1: _t->gotoOverviewPage(); break;
        case 2: _t->gotoHistoryPage(); break;
        case 3: _t->gotoMasternodePage(); break;
        case 4: _t->gotoReceiveCoinsPage(); break;
        case 5: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->gotoSendCoinsPage(); break;
        case 7: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->gotoSignMessageTab(); break;
        case 9: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->gotoVerifyMessageTab(); break;
        case 11: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->backupWallet(); break;
        case 13: _t->changePassphrase(); break;
        case 14: _t->unlockWallet(); break;
        case 15: _t->lockWallet(); break;
        case 16: _t->usedSendingAddresses(); break;
        case 17: _t->usedReceivingAddresses(); break;
        case 18: _t->outOfSyncWarningClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalletFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletFrame::requestedSyncWarningInfo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WalletFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletFrame.data,
      qt_meta_data_WalletFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletFrame.stringdata0))
        return static_cast<void*>(const_cast< WalletFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void WalletFrame::requestedSyncWarningInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
