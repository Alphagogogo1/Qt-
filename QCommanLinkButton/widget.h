#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCommandLinkButton>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QCommandLinkButton *commandLinkButton;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
