#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFontComboBox>
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
    QFontComboBox * fontconbox;
    QLabel * label;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
