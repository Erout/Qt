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
    QPushButton *delete_2;
    QPushButton *clear;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *exc;
    QTextBrowser *textBrowser;
    QPushButton *equal;
    QTableView *tableView;

    void setupUi(QWidget *StackCal)
    {
        if (StackCal->objectName().isEmpty())
            StackCal->setObjectName(QStringLiteral("StackCal"));
        StackCal->resize(706, 626);
        one = new QPushButton(StackCal);
        one->setObjectName(QStringLiteral("one"));
        one->setGeometry(QRect(40, 150, 60, 60));
        two = new QPushButton(StackCal);
        two->setObjectName(QStringLiteral("two"));
        two->setGeometry(QRect(110, 150, 60, 60));
        three = new QPushButton(StackCal);
        three->setObjectName(QStringLiteral("three"));
        three->setGeometry(QRect(180, 150, 60, 60));
        four = new QPushButton(StackCal);
        four->setObjectName(QStringLiteral("four"));
        four->setGeometry(QRect(40, 220, 60, 60));
        five = new QPushButton(StackCal);
        five->setObjectName(QStringLiteral("five"));
        five->setGeometry(QRect(110, 220, 60, 60));
        six = new QPushButton(StackCal);
        six->setObjectName(QStringLiteral("six"));
        six->setGeometry(QRect(180, 220, 60, 60));
        seven = new QPushButton(StackCal);
        seven->setObjectName(QStringLiteral("seven"));
        seven->setGeometry(QRect(40, 290, 60, 60));
        eight = new QPushButton(StackCal);
        eight->setObjectName(QStringLiteral("eight"));
        eight->setGeometry(QRect(110, 290, 60, 60));
        nine = new QPushButton(StackCal);
        nine->setObjectName(QStringLiteral("nine"));
        nine->setGeometry(QRect(180, 290, 60, 60));
        zero = new QPushButton(StackCal);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(110, 360, 60, 60));
        delete_2 = new QPushButton(StackCal);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setGeometry(QRect(180, 360, 60, 60));
        clear = new QPushButton(StackCal);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(40, 360, 60, 60));
        add = new QPushButton(StackCal);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(260, 150, 93, 40));
        sub = new QPushButton(StackCal);
        sub->setObjectName(QStringLiteral("sub"));
        sub->setGeometry(QRect(260, 210, 93, 40));
        mul = new QPushButton(StackCal);
        mul->setObjectName(QStringLiteral("mul"));
        mul->setGeometry(QRect(260, 270, 93, 40));
        exc = new QPushButton(StackCal);
        exc->setObjectName(QStringLiteral("exc"));
        exc->setGeometry(QRect(260, 320, 93, 40));
        textBrowser = new QTextBrowser(StackCal);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 30, 621, 101));
        equal = new QPushButton(StackCal);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setGeometry(QRect(260, 380, 93, 40));
        tableView = new QTableView(StackCal);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(380, 150, 281, 271));

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
        delete_2->setText(QApplication::translate("StackCal", "X", Q_NULLPTR));
        clear->setText(QApplication::translate("StackCal", "C", Q_NULLPTR));
        add->setText(QApplication::translate("StackCal", "+", Q_NULLPTR));
        sub->setText(QApplication::translate("StackCal", "-", Q_NULLPTR));
        mul->setText(QApplication::translate("StackCal", "*", Q_NULLPTR));
        exc->setText(QApplication::translate("StackCal", "/", Q_NULLPTR));
        equal->setText(QApplication::translate("StackCal", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StackCal: public Ui_StackCal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKCAL_H
