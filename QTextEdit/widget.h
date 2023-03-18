#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QTextEdit *edit;
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
