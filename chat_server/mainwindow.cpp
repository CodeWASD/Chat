#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    chatServer= new QTcpServer(this);
    if(chatServer->listen(QHostAddress::Any,6565)){
        connect(chatServer,&QTcpServer::newConnection,this,&MainWindow::newConnection);

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::newConnection(){
    while (chatServer->hasPendingConnections()) {
        appendToSocketList(chatServer->nextPendingConnection());

    }
}
void MainWindow::appendToSocketList(QTcpSocket* socket){
    connect(socket,&QTcpSocket::readyRead,this,&MainWindow::readyRead);
    socketList.append(socket);


}
void MainWindow::readyRead(){

    QTcpSocket * socket =(QTcpSocket*)sender();
    QByteArray readAll=socket->readAll();
    for(int i = 0;i<socketList.length();i++){
        if(socketList.at(i)!=socket)
        socketList.at(i)->write(readAll);
    }
}
