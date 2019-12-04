#ifndef CUSTWIDGET_H
#define CUSTWIDGET_H

#include <QObject>
#include <QWidget>
#include <QEvent>
#include <QKeyEvent>

class CustWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CustWidget(QWidget *parent = 0);

signals:

public slots:

protected:
    bool event(QEvent *ent);
};

#endif // CUSTWIDGET_H
