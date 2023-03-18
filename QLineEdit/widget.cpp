#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(800,500);

    edit=new QLineEdit(this);
    edit->move(300,200);
    edit->setFixedSize(150,30);

    btn=new QPushButton("确定",this);
    btn->move(460,200);
    btn->setFixedSize(50,30);

    label=new QLabel(this);
    label->move(300,250);
    label->setFixedSize(200,30);
    label->setText("您输入的内容为:");
    label->setStyleSheet("QLabel{font-family:华文新魏}");
    connect(btn,&QPushButton::clicked,[=]{
        label->setText(QString("您输入的内容为:%1").arg(edit->text()));
        edit->clear();
    });
}

Widget::~Widget()
{
    delete ui;
}
