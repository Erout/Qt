/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
#include <QtWidgets/QTextBrowser>
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
    QLabel *rst1;
    QPushButton *show;
    QTextBrowser *textBrowser;
    QLabel *rst2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1284, 631);
        poly1 = new QLineEdit(Widget);
        poly1->setObjectName(QStringLiteral("poly1"));
        poly1->setGeometry(QRect(60, 40, 1151, 31));
        poly2 = new QLineEdit(Widget);
        poly2->setObjectName(QStringLiteral("poly2"));
        poly2->setGeometry(QRect(60, 100, 1151, 31));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 72, 15));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 72, 15));
        addBtn = new QPushButton(Widget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(60, 150, 93, 28));
        subBtn = new QPushButton(Widget);
        subBtn->setObjectName(QStringLiteral("subBtn"));
        subBtn->setGeometry(QRect(170, 150, 93, 28));
        mulBtn = new QPushButton(Widget);
        mulBtn->setObjectName(QStringLiteral("mulBtn"));
        mulBtn->setGeometry(QRect(280, 150, 93, 28));
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
        cal1->setGeometry(QRect(60, 210, 1141, 41));
        rst1 = new QLabel(Widget);
        rst1->setObjectName(QStringLiteral("rst1"));
        rst1->setGeometry(QRect(60, 330, 1151, 41));
        show = new QPushButton(Widget);
        show->setObjectName(QStringLiteral("show"));
        show->setGeometry(QRect(390, 270, 141, 31));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 460, 1161, 161));
        rst2 = new QLabel(Widget);
        rst2->setObjectName(QStringLiteral("rst2"));
        rst2->setGeometry(QRect(60, 410, 1161, 41));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 310, 61, 21));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 390, 72, 15));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 190, 72, 15));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "1\345\217\267\345\244\232\351\241\271\345\274\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "2\345\217\267\345\244\232\351\241\271\345\274\217", Q_NULLPTR));
        addBtn->setText(QApplication::translate("Widget", "\345\212\240", Q_NULLPTR));
        subBtn->setText(QApplication::translate("Widget", "\345\207\217", Q_NULLPTR));
        mulBtn->setText(QApplication::translate("Widget", "\344\271\230", Q_NULLPTR));
        derBtn->setText(QApplication::translate("Widget", "\346\261\202\345\257\274", Q_NULLPTR));
        InpBtn->setText(QApplication::translate("Widget", "\344\273\243\345\205\245x\345\200\274", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "x", Q_NULLPTR));
        cal1->setText(QApplication::translate("Widget", "\345\212\240\345\207\217\344\271\230\347\232\204\347\273\223\346\236\234", Q_NULLPTR));
        rst1->setText(QApplication::translate("Widget", "\346\261\202\345\257\274\357\274\214\344\273\243\345\205\245\357\274\214\351\231\215\345\271\202\350\276\223\345\207\272\347\232\204\347\273\223\346\236\234", Q_NULLPTR));
        show->setText(QApplication::translate("Widget", "\346\214\207\346\225\260\351\231\215\345\271\202\350\276\223\345\207\272\345\216\237\345\274\217", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\254\242\350\277\216\344\275\277\347\224\250\346\234\254\345\244\232\351\241\271\345\274\217\350\256\241\347\256\227\345\231\250\357\274\214\344\273\245\344\270\213\346\230\257\344\275\277\347\224\250\346\263\250\346\204\217\344\272\213\351\241\271\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1.\345\244\232\351\241\271\345\274\217\350\276\223\345\205\245\347\232\204\345\233\272\345\256\232\346\240\274\345\274\217\344\270\272 c1x^e1 +c2x^e2 +c3x^e3...\345\205\266\344\270"
                        "\255c1,c2\347\255\211\344\270\272\347\263\273\346\225\260\357\274\210\350\213\245\347\263\273\346\225\260\344\270\272\350\264\237\357\274\214\347\233\270\345\272\224\347\232\204\345\212\240\345\217\267\345\260\261\345\217\230\344\270\272\345\207\217\345\217\267\357\274\211e2\347\255\211\344\270\272\346\214\207\346\225\260\343\200\202\350\257\267\346\263\250\346\204\217\350\246\201\350\276\223\345\205\245\344\270\213\344\270\200\351\241\271\346\227\266\357\274\214\350\246\201\345\222\214\345\211\215\344\270\200\351\241\271\344\271\213\351\227\264\347\225\231\346\234\211\344\270\200\344\270\252\347\251\272\346\240\274\347\232\204\344\275\215\347\275\256\343\200\202\344\276\213\345\246\202\357\274\232x^3 +x^5 -x^-2 -2.2x^10 +1.8x^9</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2.\344\273\243\345\205\245x\345\200\274\346\227\266\357\274\214\350\257\267\345\205\210\345\234\250spinbox\351\207\214\351\235\242\350\276\223\345\205\245\345"
                        "\200\274\357\274\214\345\206\215\347\202\271\345\207\273\344\273\243\345\205\245\345\200\274\346\214\211\351\222\256</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3.\345\207\217\346\263\225\351\273\230\350\256\244\346\230\2571\345\217\267\345\207\2172\345\217\267</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3.\345\212\240\345\207\217\344\271\230\347\232\204\347\273\223\346\236\234\350\276\223\345\207\272\345\234\250\346\214\211\351\222\256\344\270\213\351\235\242\347\232\204\346\241\206\351\207\214\351\235\242</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4.\346\261\202\345\257\274\357\274\214\344\273\243\345\205\245\357\274\214\351\231\215\345\271\202\350\276\223\345\207\272\347\232\204\347\273\223\346\236\234\345\234\250\345\256\203\344\273\254\347\232\204\346\214"
                        "\211\351\222\256\344\270\213\351\235\242\347\232\204\346\241\206\351\207\214\351\235\242</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\204\237\350\260\242\346\202\250\344\275\277\347\224\250\346\234\254\350\256\241\347\256\227\345\231\250\357\274\201</p></body></html>", Q_NULLPTR));
        rst2->setText(QApplication::translate("Widget", "\346\261\202\345\257\274\357\274\214\344\273\243\345\205\245\357\274\214\351\231\215\345\271\202\350\276\223\345\207\272\347\232\204\347\273\223\346\236\234", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "1\345\217\267\347\273\223\346\236\234", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "2\345\217\267\347\273\223\346\236\234", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\347\273\223\346\236\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
