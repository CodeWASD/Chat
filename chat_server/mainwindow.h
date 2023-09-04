#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>

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
    void newConnection();
    void readyRead();

private:
    Ui::MainWindow *ui;
    QTcpServer* chatServer;
    QVector <QTcpSocket*> socketList;
    void appendToSocketList(QTcpSocket* socket);
};
#endif // MAINWINDOW_H
