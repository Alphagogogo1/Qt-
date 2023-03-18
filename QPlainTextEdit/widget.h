#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPlainTextEdit>
#include <QDir>
#include <QFileDialog>
#include <QPushButton>
#include <QCheckBox>
#include <QFile>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QPlainTextEdit *text;
    QPushButton *btn1;
    QPushButton *btn2;
    QCheckBox *checkbox;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
