#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置一下窗口
    setFixedSize(800,500);

    //创建两个定义的按钮
    btn1=new QRadioButton(this);
    btn2=new QRadioButton(this);

    //设置两个按钮的位置
    btn1->setGeometry(200,200,100,45);
    btn2->setGeometry(400,200,100,45);

    //设置一下两个按钮的文本
    btn1->setText("开关一");
    btn2->setText("开关二");

    //设置默认样式
    btn1->setChecked(true);
    btn1->setChecked(false);
    QFile file("qss.txt");
    if(file.exists()){
        file.open(QFile::ReadOnly);
        QString styleSheet=QLatin1String(file.readAll());
        qApp->setStyleSheet(styleSheet);
        file.close();
    }
    else
        QMessageBox::warning(0,"错误","文件不存在",QMessageBox::Ok);
}

MainWindow::~MainWindow()
{
    delete ui;
}
