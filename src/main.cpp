#include "mainwindow.h"
#include <QApplication>
#include "custbutton.h"
#include "custwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setMouseTracking(true);
    w.show();

//    CustButton cbtn;
//    cbtn.show();
    CustWidget cw ;
    cw.show();
    cw.setFixedSize(500, 500);
    QPushButton *btn = new QPushButton(&cw);
    btn->move(QPoint(50, 50));
    btn->setText("NUM1");
    QPushButton *btn2 = new QPushButton(&cw);
    btn2->move(QPoint(200, 200));
    btn2->setText("NUM2");

    return a.exec();
}
