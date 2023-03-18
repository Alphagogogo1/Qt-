#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(800,500);
    this->setStyleSheet("Widget{background-color:rgb(100,100,100,100%)}");

    spinbox=new QSpinBox(this);
    spinbox->setGeometry(350,200,150,30);

    /*设置范围0~100*/
    spinbox->setRange(0,100);
    /*设置步长为10*/
    spinbox->setSingleStep(10);
    /*设置初始值为100*/
    spinbox->setValue(100);
    /*设置后缀*/
    spinbox->setSuffix("%不透明度");

    connect(spinbox,static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),[=](int i){
        double doub_Opacity=(double)i/100;
        this->setWindowOpacity(doub_Opacity);
    });
}

Widget::~Widget()
{
    delete ui;
}
