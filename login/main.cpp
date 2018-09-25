#include "mainwindow.h"
#include "logindialog.h"
#include "Calculator.hpp"
#include <QApplication>
#include <QPushButton>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginDialog dlg;
    Calculator ca;
    dlg.show();
    while(1){
        string s1,s2;
        int ins;
        if(dlg.Calculate()==true){
            ins = dlg.getInstruction();
            switch(ins){
            case 0:
                break;
            case 1:
                s1 = dlg.getFirstText();
                s2 = dlg.getSecondText();
                ca.Input(s1,1);
                ca.Input(s2,2);
                ca.add();
                dlg.showResult(ca.getResult());
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                 break;
            case 5:
                break;
            default:
                break;
            }
            dlg.reSetCalculate();
        }
        if(dlg.quitStatus()==true){
            break;
        }
    }
    return a.exec();
}
