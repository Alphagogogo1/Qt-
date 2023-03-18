#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setGeometry(200,200,800,480);
    dou_Spinbox=new QDoubleSpinBox(this);
    dou_Spinbox->setGeometry((this->width()-200)/2,
                              (this->height()-200)/2,
                             200,30);
    /*设置前缀*/
    dou_Spinbox->setPrefix("窗口大小");
    /*设置后缀*/
    dou_Spinbox->setSuffix("%");
    /*设置范围*/
    dou_Spinbox->setRange(50.00,100.00);
    /*设置初始值*/
    dou_Spinbox->setValue(100.00);
    /*设置步长*/
    dou_Spinbox->setSingleStep(0.1);

    connect(dou_Spinbox,static_cast<void(QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),[=](double value){
        int w=800*value/100;
        int h=480*value/100;

        /*重新设置*/
        this->setGeometry(200,200,w,h);
        dou_Spinbox->setGeometry((this->width()-200)/2,
                                  (this->height()-200)/2,
                                 200,30);
    });
}

Widget::~Widget()
{
    delete ui;
}
