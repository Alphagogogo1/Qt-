#include "widget.h"
#include "ui_widget.h"
#include <QKeySequence>
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setGeometry(300,300,800,480);
    keySequenceEdit=new QKeySequenceEdit(this);
    keySequenceEdit->setGeometry(350,200,150,30);

    connect(keySequenceEdit,&QKeySequenceEdit::keySequenceChanged,[&](QKeySequence keySequence){
        /* 判断输入的组合键是否为Ctrl + Q，如果是则退出程序 */
          if(keySequence == QKeySequence(tr("Ctrl+Q"))) {
              /* 结束程序 */
              this->close();
          }else {
              /* 打印出按下的组合键 */
              qDebug()<<keySequence.toString()<<endl;
          }
    });
}

Widget::~Widget()
{
    delete ui;
}
