#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setStyleSheet("Widget{background-color:rgb(100,100,100,80%)}");
    this->setFixedSize(800,500);

    combox=new QComboBox(this);
    combox->move(300,200);
    combox->setFixedSize(150,20);
    combox->addItem("江苏省(默认)");
    combox->addItem("上海市");
    combox->addItem("浙江省");

     combox2=new QComboBox(this);
     combox2->move(300,300);
     combox2->setFixedSize(150,20);
     QStringList province;
     province<<"上海市(默认)"<<"北京市"<<"天津市"<<"重庆市";
     combox2->addItems(province);

     connect(combox,&QComboBox::currentTextChanged,[=](QString text){
         qDebug()<<"您选择的文本是:"<<text<<endl;
     });
     connect(combox2,static_cast<void(QComboBox::*)(int)>(&QComboBox::currentIndexChanged),[=](int index){
         qDebug()<<"您选择的序号本文是:"<<combox2->itemText(index)<<endl;
     });
}

Widget::~Widget()
{
    delete ui;
}
