#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    datedit=new QDateEdit(QDate::currentDate(),this);
    datedit->move(this->width()/2,this->height()/4);

    timedit=new QTimeEdit(QTime::currentTime(),this);
    timedit->move(this->width()/2,this->height()/2);

    datetimedit=new QDateTimeEdit(QDateTime::currentDateTime(),this);
    datetimedit->move(this->width()/2,this->height()*3/4);
}

Widget::~Widget()
{
    delete ui;
}
