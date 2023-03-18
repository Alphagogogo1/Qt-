#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(800,500);
    text=new QPlainTextEdit(this);
    text->setGeometry(0,0,800,400);

    btn1=new QPushButton("选择文件",this);
    btn2=new QPushButton("选择全部",this);

    btn1->setGeometry(200,450,100,30);
    btn2->setGeometry(500,450,100,30);

    checkbox=new QCheckBox("只读",this);
    checkbox->setGeometry(400,450,100,30);


    connect(btn1,&QPushButton::clicked,[=]{
        QString fileName=QFileDialog::getOpenFileName(this,"打开当前工作目录",QDir::currentPath(),"所有文件(*.*)");
        if (fileName.isEmpty())
            return ;
        QFile file(fileName);
        if(!file.exists())
            return ;
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        text->setPlainText(file.readAll());
        file.close();
    });
    connect(btn2,&QPushButton::clicked,[=]{
        text->selectAll();
    });
    connect(checkbox,&QCheckBox::clicked,[=]{
        if(checkbox->isChecked()){
            text->setReadOnly(true);
        }
        else{
            text->setReadOnly(false);
        }

    });
}

Widget::~Widget()
{
    delete ui;
}
