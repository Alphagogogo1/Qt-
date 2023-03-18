#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(800,500);

    btnOk=new QPushButton("确定",this);
    btnOk->setFixedSize(100,30);
    btnOk->move(100,400);


    btnCancel=new QPushButton("取消",this);
    btnCancel->setFixedSize(100,30);
    btnCancel->move(600,400);

    edit=new QTextEdit(this);
    edit->setGeometry(0,0,800,350);

    connect(btnOk,&QPushButton::clicked,[=]{
        edit->selectAll();
    });
    connect(btnCancel,&QPushButton::clicked,[=]{
        edit->clear();
    });
}

Widget::~Widget()
{
    delete ui;
}
