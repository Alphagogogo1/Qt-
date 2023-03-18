#include "widget.h"
#include "ui_widget.h"
#include <QDesktopServices>
#include <QUrl>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(800,500);
    this->setStyleSheet("Widget{background-color:rgb(100,100,100,100%)}");
    commandLinkButton=new QCommandLinkButton(this);
    commandLinkButton->move(300,200);
    commandLinkButton->setText("打开桌面目录");
    commandLinkButton->setDescription("点击将调用系统桌面目录");

    connect(commandLinkButton,&QCommandLinkButton::clicked,[=]{

        QDesktopServices::openUrl(QUrl("D:/"));
    });

}

Widget::~Widget()
{
    delete ui;
}
