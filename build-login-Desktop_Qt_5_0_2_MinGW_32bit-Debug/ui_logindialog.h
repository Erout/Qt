/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *userLineEdit;
    QLineEdit *pwdLineEdit;
    QPushButton *loginBtn;
    QPushButton *exitBtn;
    QPushButton *addBtn;
    QPushButton *subBtn;
    QPushButton *mulBtn;
    QPushButton *derBtn;
    QPushButton *inpBtn;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *result;
    QLabel *label_4;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 72, 15));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 72, 15));
        userLineEdit = new QLineEdit(LoginDialog);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(120, 30, 113, 21));
        pwdLineEdit = new QLineEdit(LoginDialog);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(120, 70, 113, 21));
        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(70, 250, 93, 28));
        exitBtn = new QPushButton(LoginDialog);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(240, 250, 93, 28));
        addBtn = new QPushButton(LoginDialog);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(290, 40, 93, 28));
        subBtn = new QPushButton(LoginDialog);
        subBtn->setObjectName(QStringLiteral("subBtn"));
        subBtn->setGeometry(QRect(290, 80, 93, 28));
        mulBtn = new QPushButton(LoginDialog);
        mulBtn->setObjectName(QStringLiteral("mulBtn"));
        mulBtn->setGeometry(QRect(290, 120, 93, 28));
        derBtn = new QPushButton(LoginDialog);
        derBtn->setObjectName(QStringLiteral("derBtn"));
        derBtn->setGeometry(QRect(290, 160, 93, 28));
        inpBtn = new QPushButton(LoginDialog);
        inpBtn->setObjectName(QStringLiteral("inpBtn"));
        inpBtn->setGeometry(QRect(290, 200, 93, 28));
        doubleSpinBox = new QDoubleSpinBox(LoginDialog);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(140, 190, 70, 22));
        result = new QLabel(LoginDialog);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(120, 120, 72, 15));
        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 120, 72, 15));

        retranslateUi(LoginDialog);
        QObject::connect(addBtn, SIGNAL(clicked()), LoginDialog, SLOT(add()));
        QObject::connect(loginBtn, SIGNAL(clicked()), LoginDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        label->setText(QApplication::translate("LoginDialog", "one", 0));
        label_2->setText(QApplication::translate("LoginDialog", "two", 0));
        loginBtn->setText(QApplication::translate("LoginDialog", "login", 0));
        exitBtn->setText(QApplication::translate("LoginDialog", "exit", 0));
        addBtn->setText(QApplication::translate("LoginDialog", "add", 0));
        subBtn->setText(QApplication::translate("LoginDialog", "subtract", 0));
        mulBtn->setText(QApplication::translate("LoginDialog", "multiple", 0));
        derBtn->setText(QApplication::translate("LoginDialog", "derivative", 0));
        inpBtn->setText(QApplication::translate("LoginDialog", " input X", 0));
        result->setText(QApplication::translate("LoginDialog", "TextLabel", 0));
        label_4->setText(QApplication::translate("LoginDialog", "result", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
