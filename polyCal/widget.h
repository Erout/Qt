#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
	//加减乘求导带入值五个功能，其中，求导和带入值两个式子一起给出结果
	void on_addBtn_clicked();
	void on_subBtn_clicked();
	void on_mulBtn_clicked();
	void on_derBtn_clicked();
	void on_InpBtn_clicked();

private:
    Ui::Widget *ui;
    
};

#endif // WIDGET_H
