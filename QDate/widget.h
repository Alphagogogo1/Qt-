#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDateEdit>
#include <QTimeEdit>
#include <QDateTimeEdit>
#include <QDateTime>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QDateEdit * datedit;
    QTimeEdit * timedit;
    QDateTimeEdit * datetimedit;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
