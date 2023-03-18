#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //this->setStyleSheet("Widget{background-color:rgb(100,100,100,100%)}");
    this->setFixedSize(800,500);
    fontconbox=new QFontComboBox(this);
    fontconbox->setFixedSize(100,20);
    fontconbox->move(300,200);
    label=new QLabel(this);
    label->move(300,220);
    label->setMinimumSize(300,30);
    connect(fontconbox,&QFontComboBox::currentFontChanged,[=](QFont font){
        label->setFont(font);
        label->setText(QString("%1:此字体显示的效果").arg(fontconbox->itemText(fontconbox->currentIndex())));
    });
}

Widget::~Widget()
{
    delete ui;
}
