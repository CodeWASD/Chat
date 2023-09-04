/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *edt_text;
    QLineEdit *edt_client;
    QPushButton *btn_send;
    QListWidget *listWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(341, 535);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"\n"
"background-color: rgb(50, 50, 50);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        edt_text = new QLineEdit(widget);
        edt_text->setObjectName(QString::fromUtf8("edt_text"));
        edt_text->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: rgb(82, 202, 183);\n"
"}"));

        gridLayout_2->addWidget(edt_text, 2, 0, 1, 1);

        edt_client = new QLineEdit(widget);
        edt_client->setObjectName(QString::fromUtf8("edt_client"));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        edt_client->setFont(font);
        edt_client->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(13, 115, 119);\n"
"\n"
"}\n"
"\n"
""));

        gridLayout_2->addWidget(edt_client, 0, 0, 1, 1);

        btn_send = new QPushButton(widget);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        btn_send->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(20, 255, 236);\n"
"}"));

        gridLayout_2->addWidget(btn_send, 2, 1, 1, 1);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"\n"
"	background-color: rgb(13, 115, 119);\n"
"\n"
"}"));

        gridLayout_2->addWidget(listWidget, 1, 0, 1, 2);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(btn_send, listWidget);
        QWidget::setTabOrder(listWidget, edt_text);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
