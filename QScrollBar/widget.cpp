#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setGeometry(300,300,830,510);
    /*水平*/
    horizationalScrollBar=new QScrollBar(Qt::Horizontal,this);
    horizationalScrollBar->setGeometry(0,480,800,30);
    /*竖直*/
    verticalScrollBar=new QScrollBar(Qt::Vertical,this);
    verticalScrollBar->setGeometry(800,0,30,480);

}

Widget::~Widget()
{
    delete ui;
}
