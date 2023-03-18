#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRadioButton>
# if defined(_MSC_VER) && (_MSC_VER>=1600)
# pragma execution_character_set("utf-8")
# endif
namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QRadioButton* btn1; //定义两个有文本标签的按钮
    QRadioButton* btn2;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
