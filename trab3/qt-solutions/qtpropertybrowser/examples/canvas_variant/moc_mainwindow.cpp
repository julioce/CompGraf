/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Nov 6 12:46:43 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CanvasView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x05,
      44,   12,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CanvasView[] = {
    "CanvasView\0\0item\0itemClicked(QtCanvasItem*)\0"
    "itemMoved(QtCanvasItem*)\0"
};

const QMetaObject CanvasView::staticMetaObject = {
    { &QtCanvasView::staticMetaObject, qt_meta_stringdata_CanvasView,
      qt_meta_data_CanvasView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CanvasView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CanvasView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CanvasView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CanvasView))
        return static_cast<void*>(const_cast< CanvasView*>(this));
    return QtCanvasView::qt_metacast(_clname);
}

int CanvasView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtCanvasView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: itemClicked((*reinterpret_cast< QtCanvasItem*(*)>(_a[1]))); break;
        case 1: itemMoved((*reinterpret_cast< QtCanvasItem*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CanvasView::itemClicked(QtCanvasItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CanvasView::itemMoved(QtCanvasItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,
      40,   11,   11,   11, 0x08,
      50,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      75,   11,   11,   11, 0x08,
      86,   11,   11,   11, 0x08,
     102,   97,   11,   11, 0x08,
     129,   97,   11,   11, 0x08,
     169,  154,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0newRectangle()\0newEllipse()\0"
    "newLine()\0newText()\0deleteObject()\0"
    "clearAll()\0fillView()\0item\0"
    "itemClicked(QtCanvasItem*)\0"
    "itemMoved(QtCanvasItem*)\0property,value\0"
    "valueChanged(QtProperty*,QVariant)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newRectangle(); break;
        case 1: newEllipse(); break;
        case 2: newLine(); break;
        case 3: newText(); break;
        case 4: deleteObject(); break;
        case 5: clearAll(); break;
        case 6: fillView(); break;
        case 7: itemClicked((*reinterpret_cast< QtCanvasItem*(*)>(_a[1]))); break;
        case 8: itemMoved((*reinterpret_cast< QtCanvasItem*(*)>(_a[1]))); break;
        case 9: valueChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
