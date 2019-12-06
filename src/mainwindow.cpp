#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn, &QPushButton::clicked, this, &MainWindow::onBtnClicked);
    cbtn = new CustButton(this);
    cbtn->move(QPoint(100, 100));
    cbtn->setText("ME");
    CustButtonEx *cbtne = new CustButtonEx(this);
    cbtne->move(QPoint(200, 200));
    cbtne->setText("MINE");

    // the func of installEventFilter, Used the obj of cbtn, based MainWindow class
    cbtn->installEventFilter(this);

//    CustWidget *cwgt = new CustWidget(this);
//    cwgt->move(QPoint(300, 300));


}

MainWindow::~MainWindow()
{
    delete ui;
}

//press after move enable
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
   QString msg;
   msg.sprintf("<center><h1>Move:(%d, %d)</h1></center>", event->x(), event->y());
   ui->label->setText(msg);
}

void MainWindow::mousePressEvent(QMouseEvent *ent)
{
    ui->label->setText(QString("<center><h1>Press:(%1, %2)</h1></center>")
                       .arg(QString::number(ent->x()), QString::number(ent->y())));

//    if(ent->button() == Qt::LeftButton)
//    {
//        qDebug("click left");
//    }
//    else
//    {
//        qDebug("click right");
//    }
    qDebug("main window");
}

void MainWindow::mouseReleaseEvent(QMouseEvent *ent)
{
    ui->label->setText(QString("<center><h1>Release:(%1, %2)</h1></center>")
                       .arg(QString::number(ent->x()), QString::number(ent->y())));
}


//event filter
bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == cbtn)
    {
//        QKeyEvent *key_event = static_cast<QKeyEvent *>(event);
        QMouseEvent *key_mouse = static_cast<QMouseEvent *>(event);
        if(key_mouse->type() == QEvent::MouseButtonRelease)
        {
            qDebug("press key tab filter");
            return true;        //no continue to mousePress Event
        }
        else
        {
            qDebug("press key tab filter false");
            return false;
        }
    }
    else
    {
        //use eventFilter() of parents
        return QMainWindow::eventFilter(watched, event);
    }
}

void MainWindow::on_btn_clicked()
{
    qDebug("btn click");
}

void MainWindow::onBtnClicked()
{
    qDebug("second btn click");
}
