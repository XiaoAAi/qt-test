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

//    ent->ignore();
    qDebug("custbutton click");
}

//
bool CustButton::event(QEvent *ent)
{
  QMouseEvent *key_ent = static_cast<QMouseEvent *>(ent);
  if(key_ent->type() == QEvent::MouseButtonRelease)
  {
      qDebug("cbtn mouse press");
      return true;
  }
  else
  {
      //use  event() of parents
      return QPushButton::event(ent);
  }
}

void CustButton::onBtnClicked()
{
    qDebug("btn click parents");
}
