#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QComboBox>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QComboBox *combox;
    QComboBox *combox2;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
