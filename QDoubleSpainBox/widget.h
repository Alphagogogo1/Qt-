﻿#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDoubleSpinBox>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QDoubleSpinBox *dou_Spinbox;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
