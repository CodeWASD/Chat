/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *edt_client;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(278, 74);
        Client->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color: rgb(50, 50, 50);\n"
"}"));
        formLayout = new QFormLayout(Client);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(Client);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        edt_client = new QLineEdit(Client);
        edt_client->setObjectName(QString::fromUtf8("edt_client"));
        edt_client->setMaximumSize(QSize(16777215, 16777215));
        edt_client->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"   color: rgb(0, 0, 0);\n"
"	background-color: rgb(82, 202, 183);\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, edt_client);

        buttonBox = new QDialogButtonBox(Client);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("QDialogButtonBox{\n"
"	background-color: rgb(20, 255, 236);\n"
"}"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(1, QFormLayout::FieldRole, buttonBox);


        retranslateUi(Client);
        QObject::connect(buttonBox, SIGNAL(accepted()), Client, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Client, SLOT(reject()));

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Client", "Client Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
