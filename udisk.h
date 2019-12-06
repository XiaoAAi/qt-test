#ifndef UDISK_H
#define UDISK_H

#include <QObject>
#include <QAbstractNativeEventFilter>
#include <QWidget>
#include <link.h>
#include <QDebug>
#include <QApplication>

class UDISK : public QAbstractNativeEventFilter
{
    Q_OBJECT

public:
    UDISK();
protected:
//    bool nativeEventFilter(const QByteArray &eventType, void *message, long *result);
//    void sigUDiskCome(QString uDiskName);
//    void sigUDiskRemove();
private:
//    char FirstDriveFromMask(ULONG unitmask);
};

#endif // UDISK_H
