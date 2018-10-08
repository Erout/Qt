#include "stackcal.h"
#include "ui_stackcal.h"
#include<cmath>

int stringToInt(string s){
    int total = 0;
    int sign;
    string ns;
    if(s[0] == '-'){
        sign = 1;
        ns = s.substr(1,s.size()-1);
    }
    else if(s[0] == '+'){
        sign = 0;
        ns = s.substr(1,s.size()-1);
    }
    else{
        sign = 0;
        ns = s;
    }
    for(int i = 0; i < ns.size(); i++){
        total += (ns[i]-'0')*pow(10,ns.size()-i-1);
    }
    if(sign == 0)
        return total;
    else
        return -total;
}
bool IsNumber(char c){
    if((c >='0')&&(c <= '9'))
        return true;
    return false;
}
bool equalTo(char a,char b){
    if((a == '(')&&(b == ')'))
        return true;
    if((a == '#')&&(b =='#'))
        return true;
    return false;
}
//判断符号a是否小于符号b,a不等于b
bool smallerThan(char a,char b){
    if(a == '#')
        return true;
    else if(a == ')')
        return false;
    else if(a == '(')
        return true;
    else if((a == '*')||(a == '/')){
        if(b == '(')
            return true;
        return false;
    }
    else if((a == '+')||(a == '-')){
        if((b == '*')||(b == '/')||(b == '('))
            return true;
        return false;
    }
    return false;
}
int calculate(int front,int back, char operate){
    int result = 0;
    switch(operate){
        case '+':
            result = front+back;
            break;
        case '-':
            result = front-back;
            break;
        case '*':
            result = front*back;
            break;
        case '/':
            result = front/back;
    }
    return result;
}
StackCal::StackCal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StackCal)
{
    opSign.push('#');
    ui->setupUi(this);
    model = new QStandardItemModel();
    model->setColumnCount(4);
    model->setHeaderData(0,Qt::Horizontal,QString::fromStdString("运算符栈"));
    model->setHeaderData(1,Qt::Horizontal,QString::fromStdString("运算数栈"));
    model->setHeaderData(2,Qt::Horizontal,QString::fromStdString("字符串"));
    model->setHeaderData(3,Qt::Horizontal,QString::fromStdString("操作"));
    ui->tableView->setModel(model);

}

StackCal::~StackCal()
{
    while(!opNum.empty())
        opNum.pop();
    while(!opSign.empty())
        opSign.pop();
    delete ui;
}
void StackCal::Input(string s){
    expression = s;
    expression += '#';
}
void StackCal::eraseOne(){
    expression.pop_back();
}
void StackCal::clear(){
    while(!opNum.empty())
        opNum.pop();
    while(!opSign.empty())
        opSign.pop();
    expression = "";
    opSign.push('#');
}
void StackCal::compute(){
    int pos = 0;
    string tempNum;
    int front,back;
    while(!opSign.empty()){
        //若取得的是符号,将之前的tempNum转化为数字，入栈
        //再对符号进行判断,先判断相等，再判断是否小于
        if(!IsNumber(expression[pos])){
            if(tempNum.size()){
                opNum.push(stringToInt(tempNum));
                tempNum.clear();//清空tempNum
            }
            if(equalTo(opSign.top(),expression[pos])){
                opSign.pop();
                pos++;
            }
            //若栈顶元素比读入的优先级低
            else if(smallerThan(opSign.top(),expression[pos])){
                opSign.push(expression[pos]);
                pos++;
            }
            else{
                back = opNum.top();
                opNum.pop();
                front = opNum.top();
                opNum.pop();
                opNum.push(calculate(front,back,opSign.top()));
                opSign.pop();
                //这里pos不++继续进行判断
            }
        }
        else{
            tempNum += expression[pos];
            pos++;
        }
    }
}
