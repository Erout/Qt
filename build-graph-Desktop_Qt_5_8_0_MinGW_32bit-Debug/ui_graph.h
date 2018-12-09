/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_graph
{
public:
    QWidget *centralWidget;
    QPushButton *DFS;
    QTextBrowser *textBrowser_2;
    QPushButton *DFSmul;
    QPushButton *BFS;
    QPushButton *BFSmul;
    QTextBrowser *textBrowser;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menuProject4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *graph)
    {
        if (graph->objectName().isEmpty())
            graph->setObjectName(QStringLiteral("graph"));
        graph->resize(1059, 725);
        centralWidget = new QWidget(graph);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DFS = new QPushButton(centralWidget);
        DFS->setObjectName(QStringLiteral("DFS"));
        DFS->setGeometry(QRect(180, 110, 111, 51));
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(270, 200, 741, 421));
        DFSmul = new QPushButton(centralWidget);
        DFSmul->setObjectName(QStringLiteral("DFSmul"));
        DFSmul->setGeometry(QRect(180, 40, 111, 51));
        BFS = new QPushButton(centralWidget);
        BFS->setObjectName(QStringLiteral("BFS"));
        BFS->setGeometry(QRect(40, 110, 111, 51));
        BFSmul = new QPushButton(centralWidget);
        BFSmul->setObjectName(QStringLiteral("BFSmul"));
        BFSmul->setGeometry(QRect(40, 40, 111, 51));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(370, 70, 641, 51));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 200, 191, 421));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 40, 301, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 180, 211, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 180, 72, 15));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(180, 10, 46, 22));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 10, 111, 16));
        graph->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(graph);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1059, 26));
        menuProject4 = new QMenu(menuBar);
        menuProject4->setObjectName(QStringLiteral("menuProject4"));
        graph->setMenuBar(menuBar);
        mainToolBar = new QToolBar(graph);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        graph->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(graph);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        graph->setStatusBar(statusBar);

        menuBar->addAction(menuProject4->menuAction());

        retranslateUi(graph);

        QMetaObject::connectSlotsByName(graph);
    } // setupUi

    void retranslateUi(QMainWindow *graph)
    {
        graph->setWindowTitle(QApplication::translate("graph", "graph", Q_NULLPTR));
        DFS->setText(QApplication::translate("graph", "DFS\351\202\273\346\216\245\350\241\250", Q_NULLPTR));
        DFSmul->setText(QApplication::translate("graph", "DFS\351\202\273\346\216\245\345\244\232\351\207\215\350\241\250", Q_NULLPTR));
        BFS->setText(QApplication::translate("graph", "BFS\351\202\273\346\216\245\350\241\250", Q_NULLPTR));
        BFSmul->setText(QApplication::translate("graph", "BFS\351\202\273\346\216\245\345\244\232\351\207\215\350\241\250", Q_NULLPTR));
        label->setText(QApplication::translate("graph", "\351\202\273\346\216\245\345\244\232\351\207\215\350\241\250\347\232\204\350\212\202\347\202\271\350\256\277\351\227\256\345\272\217\345\210\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("graph", "\351\202\273\346\216\245\345\244\232\351\207\215\350\241\250\347\224\237\346\210\220\346\240\221\347\232\204\350\276\271\351\233\206", Q_NULLPTR));
        label_3->setText(QApplication::translate("graph", "\347\224\237\346\210\220\346\240\221", Q_NULLPTR));
        label_4->setText(QApplication::translate("graph", "\350\276\223\345\205\245\350\265\267\345\247\213\350\212\202\347\202\271", Q_NULLPTR));
        menuProject4->setTitle(QApplication::translate("graph", "Project4", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class graph: public Ui_graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
