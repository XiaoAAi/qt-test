#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>
#include "custbutton.h"
#include "custbuttonex.h"
#include "custwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    CustButton *cbtn;

protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *ent);
    void mouseReleaseEvent(QMouseEvent *ent);
    bool eventFilter(QObject *watched, QEvent *event);

private slots:
    void on_btn_clicked();
    void onBtnClicked();
};

#endif // MAINWINDOW_H
