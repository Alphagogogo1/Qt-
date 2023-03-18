#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QLineEdit *edit;
    QPushButton *btn;
    QLabel *label;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
