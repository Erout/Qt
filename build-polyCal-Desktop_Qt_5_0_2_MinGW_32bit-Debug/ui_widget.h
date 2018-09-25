/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *poly1;
    QLineEdit *poly2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *addBtn;
    QPushButton *subBtn;
    QPushButton *mulBtn;
    QPushButton *derBtn;
    QPushButton *InpBtn;
    QDoubleSpinBox *XSpinBox;
    QLabel *label_3;
    QLabel *cal1;
    QLabel *cal2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(546, 631);
        poly1 = new QLineEdit(Widget);
        poly1->setObjectName(QStringLiteral("poly1"));
        poly1->setGeometry(QRect(60, 40, 281, 31));
        poly2 = new QLineEdit(Widget);
        poly2->setObjectName(QStringLiteral("poly2"));
        poly2->setGeometry(QRect(60, 100, 281, 31));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 72, 15));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 72, 15));
        addBtn = new QPushButton(Widget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(60, 170, 93, 28));
        subBtn = new QPushButton(Widget);
        subBtn->setObjectName(QStringLiteral("subBtn"));
        subBtn->setGeometry(QRect(170, 170, 93, 28));
        mulBtn = new QPushButton(Widget);
        mulBtn->setObjectName(QStringLiteral("mulBtn"));
        mulBtn->setGeometry(QRect(280, 170, 93, 28));
        derBtn = new QPushButton(Widget);
        derBtn->setObjectName(QStringLiteral("derBtn"));
        derBtn->setGeometry(QRect(60, 270, 93, 28));
        InpBtn = new QPushButton(Widget);
        InpBtn->setObjectName(QStringLiteral("InpBtn"));
        InpBtn->setGeometry(QRect(170, 270, 93, 28));
        XSpinBox = new QDoubleSpinBox(Widget);
        XSpinBox->setObjectName(QStringLiteral("XSpinBox"));
        XSpinBox->setGeometry(QRect(300, 270, 70, 22));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 270, 72, 15));
        cal1 = new QLabel(Widget);
        cal1->setObjectName(QStringLiteral("cal1"));
        cal1->setGeometry(QRect(60, 210, 311, 41));
        cal2 = new QLabel(Widget);
        cal2->setObjectName(QStringLiteral("cal2"));
        cal2->setGeometry(QRect(60, 330, 311, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "1\345\217\267\345\244\232\351\241\271\345\274\217", 0));
        label_2->setText(QApplication::translate("Widget", "2\345\217\267\345\244\232\351\241\271\345\274\217", 0));
        addBtn->setText(QApplication::translate("Widget", "\345\212\240", 0));
        subBtn->setText(QApplication::translate("Widget", "\345\207\217", 0));
        mulBtn->setText(QApplication::translate("Widget", "\344\271\230", 0));
        derBtn->setText(QApplication::translate("Widget", "\346\261\202\345\257\274", 0));
        InpBtn->setText(QApplication::translate("Widget", "\344\273\243\345\205\245x\345\200\274", 0));
        label_3->setText(QApplication::translate("Widget", "x", 0));
        cal1->setText(QApplication::translate("Widget", "TextLabel", 0));
        cal2->setText(QApplication::translate("Widget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
