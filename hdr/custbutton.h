#ifndef CUSTBUTTON_H
#define CUSTBUTTON_H

#include <QPushButton>
#include <QObject>
#include <QMouseEvent>

class CustButton : public QPushButton
{
    Q_OBJECT

public:
    CustButton(QWidget *parent = 0);
protected:
    void mousePressEvent(QMouseEvent *ent);
private slots:
    void onBtnClicked();
};

#endif // CUSTBUTTON_H
