#include "custwidget.h"

CustWidget::CustWidget(QWidget *parent) : QWidget(parent)
{

}

bool CustWidget::event(QEvent *ent)
{
    if(ent->type() == QEvent::KeyPress)
    {
        QKeyEvent *key_event = static_cast<QKeyEvent *>(ent);

        if(key_event->key() == Qt::Key_Tab)
        {
            qDebug("you press  tab");
            return true;
        }
    }

    return QWidget::event(ent);
}

