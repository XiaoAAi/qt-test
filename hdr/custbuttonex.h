#ifndef CUSTBUTTONEX_H
#define CUSTBUTTONEX_H
#include "custbutton.h"
#include <QObject>
#include <QWidget>
#include <QMouseEvent>

class CustButtonEx : public CustButton
{
    Q_OBJECT

public:
    CustButtonEx(QWidget *parent = 0);
protected:
    void mousePressEvent(QMouseEvent *ent);
};

#endif // CUSTBUTTONEX_H
