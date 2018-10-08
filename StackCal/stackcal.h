#ifndef STACKCAL_H
#define STACKCAL_H

#include <QWidget>
#include<iostream>
#include<stack>
#include<string>
#include<QStandardItemModel>
using std::string;
using std::stack;
using std::cin;
using std::cout;
using std::endl;
namespace Ui {
class StackCal;
}

class StackCal : public QWidget
{
    Q_OBJECT

public:
    explicit StackCal(QWidget *parent = nullptr);
    ~StackCal();
    void Input(string s);
    void compute();
    void eraseOne();
    void clear();
    friend int stringToInt(string s);
    friend bool isNumber(char c);
    friend bool equalTo(char a,char b);
    friend bool smallerThan(char a,char b);
    friend int calculate(int front,int back, char operate);
private:
    Ui::StackCal *ui;
    QStandardItemModel* model ;
    string expression;
    stack<int> opNum;//储存操作数
    stack<char> opSign;//储存运算符
};

#endif // STACKCAL_H
