#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QScrollBar>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QScrollBar *horizationalScrollBar;
    QScrollBar *verticalScrollBar;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
