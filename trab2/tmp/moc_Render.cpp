/****************************************************************************
** Meta object code from reading C++ file 'Render.h'
**
** Created: Fri Oct 14 17:21:01 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/Render.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Render.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Render[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   35,    7,    7, 0x0a,
      61,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Render[] = {
    "Render\0\0screen\0renderizado(QImage)\0"
    "w,y\0updateScreen(int,int)\0"
    "recebeArquivo(QString)\0"
};

const QMetaObject Render::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Render,
      qt_meta_data_Render, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Render::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Render::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Render::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Render))
        return static_cast<void*>(const_cast< Render*>(this));
    return QThread::qt_metacast(_clname);
}

int Render::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: renderizado((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: updateScreen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: recebeArquivo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Render::renderizado(const QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
