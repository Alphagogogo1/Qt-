/******************************************************************************
 * Copyright 2020-xxxx xxx Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       widget.cpp
 * @brief      XXXX Function
 *
 * @author     xxx<xxx@xxx.com>
 * @date       2023/03/02
 * @history
 *****************************************************************************/
#include "widget.h"
#include "ui_widget.h"
#include <QStyle>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(800,500);
    btn1=new QPushButton("窗口皮肤1",this);
    btn2=new QPushButton("窗口皮肤2",this);
    btn1->setGeometry(300,200,80,40);
    btn2->setGeometry(400,200,80,40);
    //ui->toolButton1->setIcon(QIcon("C:\\Users\\朱世媛\\Desktop\\123.png"));
    ui->toolButton1->setIcon(QIcon(":\\images\\123.png"));
    QIcon icon;
    icon.addFile(":\\images\\123.png");

    btn1->setIcon(icon);
    connect(btn1,&QPushButton::clicked,[=]{
        this->setStyleSheet("background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1.3,stop:0 #D9AFD9 ,stop:0.33 #97D9E1 ,stop: 0.66 #ffffff , stop:1 #ffffff)");
    });
    connect(btn2,&QPushButton::clicked,[=]{
        this->setStyleSheet("background-color:qlineargradient(x1:0,y1:0,x2:1,y2:1,stop:0.4 #9FA5D5,stop:1 #E8F5C8)");
    });

    //QStyle* style=QApplication::style();
    //QIcon icon=style->standardIcon(QStyle::SP_TitleBarContextHelpButton);
    toolBar=new QToolBar(this);
    toolBar->setGeometry(0,0,800,50);
    toolBar->setStyleSheet("background-color:white");
    toolButton=new QToolButton();

    //toolButton->setIcon(QIcon(":\\images\\123.png"));


    //toolButton->setArrowType(Qt::RightArrow);
    toolButton->setFixedSize(50,50);
    toolButton->setText("帮助");
    toolButton->setStyleSheet("font-family:'楷体';font-size:15px;color:black");
    toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolBar->addWidget(toolButton);

    menu=new QMenu(this);
    menu->addAction(QString::fromLocal8Bit("1"));
    menu->addAction(QString::fromLocal8Bit("2"));
    menu->addAction(QString::fromLocal8Bit("3"));
    toolButton->setPopupMode(QToolButton::MenuButtonPopup);

    toolButton->setMenu(menu);



}

Widget::~Widget()
{
    delete ui;
}
