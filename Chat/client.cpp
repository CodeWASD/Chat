#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
}

Client::~Client()
{
    delete ui;
}

void Client::on_buttonBox_accepted()
{
    client_name= ui->edt_client->text();
}
QString Client::getname()
{
    return client_name;
}
