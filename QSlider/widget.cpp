#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setGeometry(300,300,800,400);
    horizontalSlider=new QSlider(Qt::Horizontal,this);
    horizontalSlider->setGeometry(250,100,200,20);
    horizontalSlider->setRange(0,100);

    verticalSlider=new QSlider(Qt::Vertical,this);
    label=new QLabel(this);
    verticalSlider->setGeometry(200,50,20,200);
    verticalSlider->setRange(0,100);

    label=new QLabel("滑动条值:0",this);
    label->setGeometry(300,200,200,20);
    connect(horizontalSlider,&QSlider::valueChanged,[=](int value){
        label->setText(QString("滑动条值为:%1").arg(value));
        verticalSlider->setSliderPosition(value);
    });
}

Widget::~Widget()
{
    delete ui;
}
