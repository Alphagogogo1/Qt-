#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QToolBar>
#include <QToolButton>
#include <QMenu>
# if defined(_MSC_VER) && (_MSC_VER>=1600)
# pragma execution_character_set("utf-8")
# endif

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private:
    QPushButton * btn1;
    QPushButton * btn2;

    QToolBar* toolBar;
    QToolButton* toolButton;

    QMenu *menu;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
