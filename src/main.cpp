#include "mainwindow.h"
#include <QApplication>
#include "custbutton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setMouseTracking(true);
    w.show();

//    CustButton cbtn;
//    cbtn.show();

    return a.exec();
}
