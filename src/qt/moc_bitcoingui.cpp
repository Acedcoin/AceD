/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[72];
    char stringdata0[966];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitcoinGUI"
QT_MOC_LITERAL(1, 11, 11), // "receivedURI"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "uri"
QT_MOC_LITERAL(4, 28, 16), // "requestedRestart"
QT_MOC_LITERAL(5, 45, 4), // "args"
QT_MOC_LITERAL(6, 50, 17), // "setNumConnections"
QT_MOC_LITERAL(7, 68, 5), // "count"
QT_MOC_LITERAL(8, 74, 16), // "setNetworkActive"
QT_MOC_LITERAL(9, 91, 13), // "networkActive"
QT_MOC_LITERAL(10, 105, 13), // "handleRestart"
QT_MOC_LITERAL(11, 119, 12), // "setNumBlocks"
QT_MOC_LITERAL(12, 132, 9), // "blockDate"
QT_MOC_LITERAL(13, 142, 21), // "nVerificationProgress"
QT_MOC_LITERAL(14, 164, 7), // "headers"
QT_MOC_LITERAL(15, 172, 29), // "setAdditionalDataSyncProgress"
QT_MOC_LITERAL(16, 202, 13), // "nSyncProgress"
QT_MOC_LITERAL(17, 216, 7), // "message"
QT_MOC_LITERAL(18, 224, 5), // "title"
QT_MOC_LITERAL(19, 230, 5), // "style"
QT_MOC_LITERAL(20, 236, 5), // "bool*"
QT_MOC_LITERAL(21, 242, 3), // "ret"
QT_MOC_LITERAL(22, 246, 11), // "setHDStatus"
QT_MOC_LITERAL(23, 258, 9), // "hdEnabled"
QT_MOC_LITERAL(24, 268, 16), // "setStakingStatus"
QT_MOC_LITERAL(25, 285, 19), // "setEncryptionStatus"
QT_MOC_LITERAL(26, 305, 6), // "status"
QT_MOC_LITERAL(27, 312, 20), // "handlePaymentRequest"
QT_MOC_LITERAL(28, 333, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(29, 352, 9), // "recipient"
QT_MOC_LITERAL(30, 362, 19), // "incomingTransaction"
QT_MOC_LITERAL(31, 382, 4), // "date"
QT_MOC_LITERAL(32, 387, 4), // "unit"
QT_MOC_LITERAL(33, 392, 7), // "CAmount"
QT_MOC_LITERAL(34, 400, 6), // "amount"
QT_MOC_LITERAL(35, 407, 4), // "type"
QT_MOC_LITERAL(36, 412, 7), // "address"
QT_MOC_LITERAL(37, 420, 5), // "label"
QT_MOC_LITERAL(38, 426, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(39, 443, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(40, 459, 18), // "gotoMasternodePage"
QT_MOC_LITERAL(41, 478, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(42, 499, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(43, 517, 4), // "addr"
QT_MOC_LITERAL(44, 522, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(45, 541, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(46, 562, 11), // "openClicked"
QT_MOC_LITERAL(47, 574, 14), // "optionsClicked"
QT_MOC_LITERAL(48, 589, 12), // "aboutClicked"
QT_MOC_LITERAL(49, 602, 15), // "showDebugWindow"
QT_MOC_LITERAL(50, 618, 8), // "showInfo"
QT_MOC_LITERAL(51, 627, 11), // "showConsole"
QT_MOC_LITERAL(52, 639, 9), // "showGraph"
QT_MOC_LITERAL(53, 649, 9), // "showPeers"
QT_MOC_LITERAL(54, 659, 10), // "showRepair"
QT_MOC_LITERAL(55, 670, 14), // "showConfEditor"
QT_MOC_LITERAL(56, 685, 16), // "showMNConfEditor"
QT_MOC_LITERAL(57, 702, 11), // "showBackups"
QT_MOC_LITERAL(58, 714, 22), // "showHelpMessageClicked"
QT_MOC_LITERAL(59, 737, 26), // "showPrivateSendHelpClicked"
QT_MOC_LITERAL(60, 764, 17), // "trayIconActivated"
QT_MOC_LITERAL(61, 782, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(62, 816, 6), // "reason"
QT_MOC_LITERAL(63, 823, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(64, 845, 13), // "fToggleHidden"
QT_MOC_LITERAL(65, 859, 12), // "toggleHidden"
QT_MOC_LITERAL(66, 872, 14), // "detectShutdown"
QT_MOC_LITERAL(67, 887, 12), // "showProgress"
QT_MOC_LITERAL(68, 900, 9), // "nProgress"
QT_MOC_LITERAL(69, 910, 18), // "setTrayIconVisible"
QT_MOC_LITERAL(70, 929, 19), // "toggleNetworkActive"
QT_MOC_LITERAL(71, 949, 16) // "showModalOverlay"

    },
    "BitcoinGUI\0receivedURI\0\0uri\0"
    "requestedRestart\0args\0setNumConnections\0"
    "count\0setNetworkActive\0networkActive\0"
    "handleRestart\0setNumBlocks\0blockDate\0"
    "nVerificationProgress\0headers\0"
    "setAdditionalDataSyncProgress\0"
    "nSyncProgress\0message\0title\0style\0"
    "bool*\0ret\0setHDStatus\0hdEnabled\0"
    "setStakingStatus\0setEncryptionStatus\0"
    "status\0handlePaymentRequest\0"
    "SendCoinsRecipient\0recipient\0"
    "incomingTransaction\0date\0unit\0CAmount\0"
    "amount\0type\0address\0label\0gotoOverviewPage\0"
    "gotoHistoryPage\0gotoMasternodePage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "addr\0gotoSignMessageTab\0gotoVerifyMessageTab\0"
    "openClicked\0optionsClicked\0aboutClicked\0"
    "showDebugWindow\0showInfo\0showConsole\0"
    "showGraph\0showPeers\0showRepair\0"
    "showConfEditor\0showMNConfEditor\0"
    "showBackups\0showHelpMessageClicked\0"
    "showPrivateSendHelpClicked\0trayIconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0showNormalIfMinimized\0fToggleHidden\0"
    "toggleHidden\0detectShutdown\0showProgress\0"
    "nProgress\0setTrayIconVisible\0"
    "toggleNetworkActive\0showModalOverlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  249,    2, 0x06 /* Public */,
       4,    1,  252,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  255,    2, 0x0a /* Public */,
       8,    1,  258,    2, 0x0a /* Public */,
      10,    1,  261,    2, 0x0a /* Public */,
      11,    4,  264,    2, 0x0a /* Public */,
      15,    1,  273,    2, 0x0a /* Public */,
      17,    4,  276,    2, 0x0a /* Public */,
      17,    3,  285,    2, 0x2a /* Public | MethodCloned */,
      22,    1,  292,    2, 0x0a /* Public */,
      24,    0,  295,    2, 0x0a /* Public */,
      25,    1,  296,    2, 0x0a /* Public */,
      27,    1,  299,    2, 0x0a /* Public */,
      30,    6,  302,    2, 0x0a /* Public */,
      38,    0,  315,    2, 0x08 /* Private */,
      39,    0,  316,    2, 0x08 /* Private */,
      40,    0,  317,    2, 0x08 /* Private */,
      41,    0,  318,    2, 0x08 /* Private */,
      42,    1,  319,    2, 0x08 /* Private */,
      42,    0,  322,    2, 0x28 /* Private | MethodCloned */,
      44,    1,  323,    2, 0x08 /* Private */,
      44,    0,  326,    2, 0x28 /* Private | MethodCloned */,
      45,    1,  327,    2, 0x08 /* Private */,
      45,    0,  330,    2, 0x28 /* Private | MethodCloned */,
      46,    0,  331,    2, 0x08 /* Private */,
      47,    0,  332,    2, 0x08 /* Private */,
      48,    0,  333,    2, 0x08 /* Private */,
      49,    0,  334,    2, 0x08 /* Private */,
      50,    0,  335,    2, 0x08 /* Private */,
      51,    0,  336,    2, 0x08 /* Private */,
      52,    0,  337,    2, 0x08 /* Private */,
      53,    0,  338,    2, 0x08 /* Private */,
      54,    0,  339,    2, 0x08 /* Private */,
      55,    0,  340,    2, 0x08 /* Private */,
      56,    0,  341,    2, 0x08 /* Private */,
      57,    0,  342,    2, 0x08 /* Private */,
      58,    0,  343,    2, 0x08 /* Private */,
      59,    0,  344,    2, 0x08 /* Private */,
      60,    1,  345,    2, 0x08 /* Private */,
      63,    1,  348,    2, 0x08 /* Private */,
      63,    0,  351,    2, 0x28 /* Private | MethodCloned */,
      65,    0,  352,    2, 0x08 /* Private */,
      66,    0,  353,    2, 0x08 /* Private */,
      67,    2,  354,    2, 0x08 /* Private */,
      69,    1,  359,    2, 0x08 /* Private */,
      70,    0,  362,    2, 0x08 /* Private */,
      71,    0,  363,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double, QMetaType::Bool,    7,   12,   13,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 20,   18,   17,   19,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   18,   17,   19,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Bool, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 33, QMetaType::QString, QMetaType::QString, QMetaType::QString,   31,   32,   34,   35,   36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   18,   68,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedURI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestedRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setNetworkActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->handleRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 6: _t->setAdditionalDataSyncProgress((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 8: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 9: _t->setHDStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setStakingStatus(); break;
        case 11: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: { bool _r = _t->handlePaymentRequest((*reinterpret_cast< const SendCoinsRecipient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 14: _t->gotoOverviewPage(); break;
        case 15: _t->gotoHistoryPage(); break;
        case 16: _t->gotoMasternodePage(); break;
        case 17: _t->gotoReceiveCoinsPage(); break;
        case 18: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->gotoSendCoinsPage(); break;
        case 20: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->gotoSignMessageTab(); break;
        case 22: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->gotoVerifyMessageTab(); break;
        case 24: _t->openClicked(); break;
        case 25: _t->optionsClicked(); break;
        case 26: _t->aboutClicked(); break;
        case 27: _t->showDebugWindow(); break;
        case 28: _t->showInfo(); break;
        case 29: _t->showConsole(); break;
        case 30: _t->showGraph(); break;
        case 31: _t->showPeers(); break;
        case 32: _t->showRepair(); break;
        case 33: _t->showConfEditor(); break;
        case 34: _t->showMNConfEditor(); break;
        case 35: _t->showBackups(); break;
        case 36: _t->showHelpMessageClicked(); break;
        case 37: _t->showPrivateSendHelpClicked(); break;
        case 38: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 39: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->showNormalIfMinimized(); break;
        case 41: _t->toggleHidden(); break;
        case 42: _t->detectShutdown(); break;
        case 43: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->setTrayIconVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->toggleNetworkActive(); break;
        case 46: _t->showModalOverlay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BitcoinGUI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BitcoinGUI::receivedURI)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BitcoinGUI::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BitcoinGUI::requestedRestart)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI.data,
      qt_meta_data_BitcoinGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata0))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void BitcoinGUI::receivedURI(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BitcoinGUI::requestedRestart(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_UnitDisplayStatusBarControl_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitDisplayStatusBarControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitDisplayStatusBarControl_t qt_meta_stringdata_UnitDisplayStatusBarControl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "UnitDisplayStatusBarControl"
QT_MOC_LITERAL(1, 28, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "newUnits"
QT_MOC_LITERAL(4, 56, 15), // "onMenuSelection"
QT_MOC_LITERAL(5, 72, 8), // "QAction*"
QT_MOC_LITERAL(6, 81, 6) // "action"

    },
    "UnitDisplayStatusBarControl\0"
    "updateDisplayUnit\0\0newUnits\0onMenuSelection\0"
    "QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitDisplayStatusBarControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void UnitDisplayStatusBarControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UnitDisplayStatusBarControl *_t = static_cast<UnitDisplayStatusBarControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDisplayUnit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onMenuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UnitDisplayStatusBarControl::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_UnitDisplayStatusBarControl.data,
      qt_meta_data_UnitDisplayStatusBarControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UnitDisplayStatusBarControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitDisplayStatusBarControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UnitDisplayStatusBarControl.stringdata0))
        return static_cast<void*>(const_cast< UnitDisplayStatusBarControl*>(this));
    return QLabel::qt_metacast(_clname);
}

int UnitDisplayStatusBarControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
