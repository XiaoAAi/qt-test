#include "custbutton.h"

CustButton::CustButton(QWidget *parent)
    :QPushButton(parent)
{
    connect(this, &CustButton::clicked, this, &CustButton::onBtnClicked);
}

void CustButton::mousePressEvent(QMouseEvent *ent)
{
//    if(ent->button() == Qt::LeftButton)
//    {
//        qDebug("click left");
//    }
//    else if(ent->button() == Qt::RightButton)
//    {
//        qDebug("click right");
//        QPushButton::clicked();
//    }

    ent->ignore();
    qDebug("custbutton click");
}

void CustButton::onBtnClicked()
{
    qDebug("btn click parents");
}
