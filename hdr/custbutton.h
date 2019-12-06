#ifndef CUSTBUTTON_H
#define CUSTBUTTON_H

#include <QPushButton>
#include <QObject>
#include <QMouseEvent>
#include <QEvent>

class CustButton : public QPushButton
{
    Q_OBJECT

public:
    CustButton(QWidget *parent = 0);
protected:
    void mousePressEvent(QMouseEvent *ent);
    bool event(QEvent *ent);
private slots:
    void onBtnClicked();
};

#endif // CUSTBUTTON_H
