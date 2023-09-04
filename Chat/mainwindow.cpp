#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTcpSocket>
#include <QTcpServer>
#include <QHostAddress>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Client* c=new Client(this);
    c->exec();
    ui->edt_client->setText(c->getname());
    name=c->getname();
    chatSocket=new QTcpSocket(this);

    chatSocket->connectToHost(QHostAddress::LocalHost,6565);
    connect(chatSocket, &QTcpSocket::readyRead,this,&MainWindow::readSocket);
    connect(chatSocket,&QTcpSocket::disconnected,this,&MainWindow::discardSocket);
}

MainWindow::~MainWindow()
{
    if(chatSocket->isOpen()){
        chatSocket->close();
    }
    delete ui;
}
void MainWindow::discardSocket()
{
    chatSocket->deleteLater();
    chatSocket=nullptr;

    ui->listWidget->addItem("Disconnected!");
}

void MainWindow::readSocket(){
    QTcpSocket * socket =(QTcpSocket*)sender();
    QByteArray read = socket->readAll();
    ui->listWidget->addItem(QString(read));

}
void MainWindow::on_btn_send_clicked()
{
    if (chatSocket)
    {
        QString textClient=ui->edt_text->text();
        Message =name+':'+textClient;
        chatSocket->write(Message.toLocal8Bit());
        ui->edt_text->clear();
    }

}
void MainWindow::on_edt_text_returnPressed()
{
    on_btn_send_clicked();
}

