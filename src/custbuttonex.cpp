#include "custbuttonex.h"

CustButtonEx::CustButtonEx(QWidget *parent)
    :CustButton(parent)
{

}

void CustButtonEx::mousePressEvent(QMouseEvent *ent)
{
    qDebug("CustButton Extern Click press");
//    CustButton::mousePressEvent(ent);
    ent->ignore();
}
