#include "stackcal.h"
#include "ui_stackcal.h"
#include<cmath>
#include<cstdio>

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
    NFlag = 0;
    SFlag = 0;
    opSign.push('#');
    opS[SFlag++] = '#';
    ui->setupUi(this);
    model = new QStandardItemModel();
    model->setColumnCount(4);
    model->setHeaderData(0,Qt::Horizontal,QString::fromStdString("运算符栈"));
    model->setHeaderData(1,Qt::Horizontal,QString::fromStdString("运算数栈"));
    model->setHeaderData(2,Qt::Horizontal,QString::fromStdString("字符串"));
    model->setHeaderData(3,Qt::Horizontal,QString::fromStdString("操作"));
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,200);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->setColumnWidth(3,500);
}

StackCal::~StackCal()
{
    while(!opNum.empty())
        opNum.pop();
    while(!opSign.empty())
        opSign.pop();
    NFlag = 0;
    SFlag = 0;
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
    NFlag = 0;
    SFlag = 0;
    opSign.push('#');
    opS[SFlag++] = '#';
    model->clear();
    model->setColumnCount(4);
    model->setHeaderData(0,Qt::Horizontal,QString::fromStdString("运算符栈"));
    model->setHeaderData(1,Qt::Horizontal,QString::fromStdString("运算数栈"));
    model->setHeaderData(2,Qt::Horizontal,QString::fromStdString("字符串"));
    model->setHeaderData(3,Qt::Horizontal,QString::fromStdString("操作"));
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,200);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->setColumnWidth(3,500);
}
string StackCal::opNToString(){
    char* c = new char[10];
    string s;
    for(int i = 0; i < NFlag; i++){
        sprintf(c,"%d%c",opN[i],' ');
        s += c;
    }
    return s;
}
string StackCal::opSToString(){
    string s;
    for(int i = 0; i < SFlag; i++){
        s += opS[i];
        s += ' ';
    }
    return s;
}
void StackCal::compute(){
    int pos = 0;
    string tempNum;
    string operation;
    char temp;
    char* ntemp = new char[10];
    int front,back;
    int row = 0;//记录表格写到哪一行
    while(!opSign.empty()){
        //若取得的是符号,将之前的tempNum转化为数字，入栈
        //再对符号进行判断,先判断相等，再判断是否小于
        //如果是符号，进行操作
        if(!IsNumber(expression[pos])){
            //把记录的数入栈
            if(tempNum.size()){
                opNum.push(stringToInt(tempNum));
                opN[NFlag++] = stringToInt(tempNum);
                model->setItem(row,0,new QStandardItem(QString::fromStdString(opSToString())));
                model->setItem(row,1,new QStandardItem(QString::fromStdString(opNToString())));
                model->setItem(row,2,new QStandardItem(QString::fromStdString(expression.substr(pos,expression.size()-pos))));
                operation += "将操作数";
                operation += tempNum;
                operation += "入栈";
                model->setItem(row,3,new QStandardItem(QString::fromStdString(operation)));
                row++;
                operation.clear();
                tempNum.clear();//清空tempNum
            }
            //若两个操作符优先级相等，那么弹符号栈
            if(equalTo(opSign.top(),expression[pos])){
                temp = opSign.top();
                opSign.pop();
                SFlag--;
                model->setItem(row,0,new QStandardItem(QString::fromStdString(opSToString())));
                model->setItem(row,1,new QStandardItem(QString::fromStdString(opNToString())));
                model->setItem(row,2,new QStandardItem(QString::fromStdString(expression.substr(pos,expression.size()-pos))));
                operation += "从符号栈中弹出";
                operation += temp;
                model->setItem(row,3,new QStandardItem(QString::fromStdString(operation)));
                row++;
                operation.clear();
                pos++;
            }
            //若栈顶元素比读入的优先级低，那么符号入栈
            else if(smallerThan(opSign.top(),expression[pos])){
                opSign.push(expression[pos]);
                opS[SFlag++] = expression[pos];
                model->setItem(row,0,new QStandardItem(QString::fromStdString(opSToString())));
                model->setItem(row,1,new QStandardItem(QString::fromStdString(opNToString())));
                model->setItem(row,2,new QStandardItem(QString::fromStdString(expression.substr(pos,expression.size()-pos))));
                operation += "将符号";
                operation += expression[pos];
                operation += "入栈";
                model->setItem(row,3,new QStandardItem(QString::fromStdString(operation)));
                row++;
                pos++;
            }
            //否则，从数栈中取出两个数，从符号栈中取出一个符号，进行计算，且未进栈的符号继续进行判断
            else{    
                operation +="从数栈取出";
                back = opNum.top();
                opNum.pop();
                sprintf(ntemp,"%d",back);
                operation += ntemp;
                operation += "和";
                front = opNum.top();
                opNum.pop();
                sprintf(ntemp,"%d",front);
                operation += ntemp;
                operation += "进行";
                operation += opSign.top();
                operation += "操作";
                NFlag -= 2;
                opNum.push(calculate(front,back,opSign.top()));
                opN[NFlag++] = calculate(front,back,opSign.top());
                opSign.pop();
                SFlag--;
                model->setItem(row,0,new QStandardItem(QString::fromStdString(opSToString())));
                model->setItem(row,1,new QStandardItem(QString::fromStdString(opNToString())));
                model->setItem(row,2,new QStandardItem(QString::fromStdString(expression.substr(pos,expression.size()-pos))));
                model->setItem(row,3,new QStandardItem(QString::fromStdString(operation)));
                row++;
                //这里pos不++继续进行判断
            }
        }
        //如果是数字，就记录
        else{
            tempNum += expression[pos];
            pos++;
        }
    }
}
void StackCal::on_one_clicked(){
    expression += '1';
    ui->textBrowser->setText(QString::fromStdString(expression)); 
}
void StackCal::on_two_clicked(){
    expression += '2';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_three_clicked(){
    expression += '3';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_four_clicked(){
    expression += '4';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_five_clicked(){
    expression += '5';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_six_clicked(){
    expression += '6';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_seven_clicked(){
    expression += '7';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_eight_clicked(){
    expression += '8';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_nine_clicked(){
    expression += '9';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_zero_clicked(){
    expression += '0';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_add_clicked(){
    expression += '+';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_sub_clicked(){
    expression += '-';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_mul_clicked(){
    expression += '*';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_exc_clicked(){
    expression += '/';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_leftKuo_clicked(){
    expression += '(';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_rightKuo_clicked(){
    expression += ')';
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_equal_clicked(){
    expression += '#';
    compute();
    char* c = new char[5];
    string s;
    sprintf(c,"%d",opNum.top());
    s += c;
    ui->textBrowser->setText(QString::fromStdString(s));

}
void StackCal::on_clear_clicked(){
    clear();
    ui->textBrowser->setText(QString::fromStdString(expression));
}
void StackCal::on_erase_clicked(){
    eraseOne();
    ui->textBrowser->setText(QString::fromStdString(expression));
}
