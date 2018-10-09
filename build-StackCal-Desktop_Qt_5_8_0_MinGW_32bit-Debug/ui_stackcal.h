/********************************************************************************
** Form generated from reading UI file 'stackcal.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKCAL_H
#define UI_STACKCAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StackCal
{
public:
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *zero;
    QPushButton *erase;
    QPushButton *clear;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *exc;
    QTextBrowser *textBrowser;
    QPushButton *equal;
    QTableView *tableView;
    QPushButton *leftKuo;
    QPushButton *rightKuo;
    QTextBrowser *textBrowser_2;
    QPushButton *exp;

    void setupUi(QWidget *StackCal)
    {
        if (StackCal->objectName().isEmpty())
            StackCal->setObjectName(QStringLiteral("StackCal"));
        StackCal->resize(1011, 684);
        one = new QPushButton(StackCal);
        one->setObjectName(QStringLiteral("one"));
        one->setGeometry(QRect(40, 90, 60, 60));
        two = new QPushButton(StackCal);
        two->setObjectName(QStringLiteral("two"));
        two->setGeometry(QRect(110, 90, 60, 60));
        three = new QPushButton(StackCal);
        three->setObjectName(QStringLiteral("three"));
        three->setGeometry(QRect(180, 90, 60, 60));
        four = new QPushButton(StackCal);
        four->setObjectName(QStringLiteral("four"));
        four->setGeometry(QRect(40, 160, 60, 60));
        five = new QPushButton(StackCal);
        five->setObjectName(QStringLiteral("five"));
        five->setGeometry(QRect(110, 160, 60, 60));
        six = new QPushButton(StackCal);
        six->setObjectName(QStringLiteral("six"));
        six->setGeometry(QRect(180, 160, 60, 60));
        seven = new QPushButton(StackCal);
        seven->setObjectName(QStringLiteral("seven"));
        seven->setGeometry(QRect(40, 230, 60, 60));
        eight = new QPushButton(StackCal);
        eight->setObjectName(QStringLiteral("eight"));
        eight->setGeometry(QRect(110, 230, 60, 60));
        nine = new QPushButton(StackCal);
        nine->setObjectName(QStringLiteral("nine"));
        nine->setGeometry(QRect(180, 230, 60, 60));
        zero = new QPushButton(StackCal);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(110, 300, 60, 60));
        erase = new QPushButton(StackCal);
        erase->setObjectName(QStringLiteral("erase"));
        erase->setGeometry(QRect(180, 300, 60, 60));
        clear = new QPushButton(StackCal);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(40, 300, 60, 60));
        add = new QPushButton(StackCal);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(260, 90, 60, 60));
        sub = new QPushButton(StackCal);
        sub->setObjectName(QStringLiteral("sub"));
        sub->setGeometry(QRect(260, 160, 60, 60));
        mul = new QPushButton(StackCal);
        mul->setObjectName(QStringLiteral("mul"));
        mul->setGeometry(QRect(260, 230, 60, 60));
        exc = new QPushButton(StackCal);
        exc->setObjectName(QStringLiteral("exc"));
        exc->setGeometry(QRect(260, 300, 60, 60));
        textBrowser = new QTextBrowser(StackCal);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 20, 351, 51));
        equal = new QPushButton(StackCal);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setGeometry(QRect(330, 300, 60, 61));
        tableView = new QTableView(StackCal);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 380, 951, 271));
        leftKuo = new QPushButton(StackCal);
        leftKuo->setObjectName(QStringLiteral("leftKuo"));
        leftKuo->setGeometry(QRect(330, 90, 60, 60));
        rightKuo = new QPushButton(StackCal);
        rightKuo->setObjectName(QStringLiteral("rightKuo"));
        rightKuo->setGeometry(QRect(330, 160, 60, 60));
        textBrowser_2 = new QTextBrowser(StackCal);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(440, 20, 541, 341));
        exp = new QPushButton(StackCal);
        exp->setObjectName(QStringLiteral("exp"));
        exp->setGeometry(QRect(330, 230, 60, 60));

        retranslateUi(StackCal);

        QMetaObject::connectSlotsByName(StackCal);
    } // setupUi

    void retranslateUi(QWidget *StackCal)
    {
        StackCal->setWindowTitle(QApplication::translate("StackCal", "StackCal", Q_NULLPTR));
        one->setText(QApplication::translate("StackCal", "1", Q_NULLPTR));
        two->setText(QApplication::translate("StackCal", "2", Q_NULLPTR));
        three->setText(QApplication::translate("StackCal", "3", Q_NULLPTR));
        four->setText(QApplication::translate("StackCal", "4", Q_NULLPTR));
        five->setText(QApplication::translate("StackCal", "5", Q_NULLPTR));
        six->setText(QApplication::translate("StackCal", "6", Q_NULLPTR));
        seven->setText(QApplication::translate("StackCal", "7", Q_NULLPTR));
        eight->setText(QApplication::translate("StackCal", "8", Q_NULLPTR));
        nine->setText(QApplication::translate("StackCal", "9", Q_NULLPTR));
        zero->setText(QApplication::translate("StackCal", "0", Q_NULLPTR));
        erase->setText(QApplication::translate("StackCal", "X", Q_NULLPTR));
        clear->setText(QApplication::translate("StackCal", "C", Q_NULLPTR));
        add->setText(QApplication::translate("StackCal", "+", Q_NULLPTR));
        sub->setText(QApplication::translate("StackCal", "-", Q_NULLPTR));
        mul->setText(QApplication::translate("StackCal", "*", Q_NULLPTR));
        exc->setText(QApplication::translate("StackCal", "/", Q_NULLPTR));
        equal->setText(QApplication::translate("StackCal", "=", Q_NULLPTR));
        leftKuo->setText(QApplication::translate("StackCal", "(", Q_NULLPTR));
        rightKuo->setText(QApplication::translate("StackCal", ")", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("StackCal", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\346\254\242\350\277\216\344\275\277\347\224\250\350\241\250\350\276\276\345\274\217\350\256\241\347\256\227\345\231\250\357\274\201</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\347\202\271\345\207\273\345\267\246\344\276\247\347\232\204\346\214\211\351\222\256\350\276\223\345\205\245\346\202\250\347\232\204\350\241\250\350\276\276\345\274\217</span></p>\n"
"<p style=\" margin-top:"
                        "0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\344\273\245\344\270\213\346\230\257\346\234\211\345\205\263\346\255\244\350\256\241\347\256\227\345\231\250\347\232\204\344\270\200\344\272\233\350\257\264\346\230\216</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"> 0-9\357\274\232\346\225\260\345\255\227</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"> + - * / \357\274\210 \357\274\211\357\274\232\350\277\220\347\256\227\347\254\246</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"> =\357\274\232\350\276\223\345\207\272\346\202\250\347\232\204\347\273\223\346\236\234</span><"
                        "/p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"> C\357\274\232\346\270\205\347\251\272</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"> X\357\274\232\345\210\240\346\216\211\344\270\200\344\270\252\346\225\260\345\255\227\346\210\226\347\254\246\345\217\267</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\346\204\237\350\260\242\346\202\250\347\232\204\344\275\277\347\224\250\357\274\201</span></p></body></html>", Q_NULLPTR));
        exp->setText(QApplication::translate("StackCal", "^", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StackCal: public Ui_StackCal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKCAL_H
