#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>

namespace Ui {
class Client;
}

class Client : public QDialog
{
    Q_OBJECT

public:
    QString  getname();
    explicit Client(QWidget *parent = nullptr);
    ~Client();
    QString name{" "};
private slots:
    void on_buttonBox_accepted();


private:
    Ui::Client *ui;
    QString client_name;
};

#endif // CLIENT_H
