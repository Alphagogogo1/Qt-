#include "widget.h"
#include "ui_widget.h"
#include <QFile>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(800,500);
    this->setStyleSheet("Widget{background-color:rgb(100,100,100)}");
    QFile file("qss.txt");

    /* 判断文件是否存在 */
    if (file.exists() ) {
        /* 以只读的方式打开 */
        file.open(QFile::ReadOnly);
        /* 以字符串的方式保存读出的结果 */
        QString styleSheet = QLatin1String(file.readAll());
        /* 设置全局样式 */
        qApp->setStyleSheet(styleSheet);
        /* 关闭文件 */
        file.close();
    }

    /*实例化CheckBox*/
    checkBox=new QCheckBox(this);
    /*移动CheckBox*/
    checkBox->move(300,200);
    /*设置CheckBox大小*/
    checkBox->setFixedSize(150,100);
    /*设置CheckBox默认状态*/
    checkBox->setCheckState(Qt::Checked);
    /*设置显示的文本*/
    checkBox->setText("Checked");
    checkBox->setTristate(true);

    /*设置一下CheckBox功能*/
    connect(checkBox,&QCheckBox::stateChanged,[=](int state){

        switch (state) {
        case Qt::Checked:
            checkBox->setText("Checked");
            break;
        case Qt::Unchecked:
            checkBox->setText("unChecked");
            break;
        case Qt::PartiallyChecked:
            checkBox->setText("PartiallyChecked");
            break;
        }
    });
}

Widget::~Widget()
{
    delete ui;
}
