#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "custbutton.h"
#include "custbuttonex.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn, &QPushButton::clicked, this, &MainWindow::onBtnClicked);
    CustButton *cbtn = new CustButton(this);
    cbtn->move(QPoint(100, 100));
    cbtn->setText("ME");
    CustButtonEx *cbtne = new CustButtonEx(this);
    cbtne->move(QPoint(200, 200));
    cbtne->setText("MINE");

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

void MainWindow::on_btn_clicked()
{
    qDebug("btn click");
}

void MainWindow::onBtnClicked()
{
    qDebug("second btn click");
}