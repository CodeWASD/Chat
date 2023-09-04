#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include "client.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void readSocket();
    void discardSocket();
    void on_btn_send_clicked();

    void on_edt_text_returnPressed();

private:
    Ui::MainWindow *ui;
    QTcpSocket *chatSocket;
    QString name;
    QString Message;


};

#endif // MAINWINDOW_H
