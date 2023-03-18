#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setGeometry(300,300,800,480);
    dial=new QDial(this);
    dial->setGeometry(300,100,200,200);
    /*设置范围*/
    dial->setRange(0,100);
    /*设置页长*/
    dial->setPageStep(10);
    /*设置刻度可见*/
    dial->setNotchesVisible(true);
    /*设置最小刻度*/
    dial->setNotchTarget(1.00);

    /*初始化label*/
    label=new QLabel(this);
    label->setGeometry(378,275,200,50);

    connect(dial,&QDial::valueChanged,[=](int value){
        label->setText(QString::number(value)+"km/h");
    });
}

Widget::~Widget()
{
    delete ui;
}
