#ifndef ESP8266CTRL_H
#define ESP8266CTRL_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QMessageBox>

namespace Ui {
class ESP8266CTRL;
}

class ESP8266CTRL : public QMainWindow
{
    Q_OBJECT

public:
    explicit ESP8266CTRL(QWidget *parent = 0);
    ~ESP8266CTRL();

private slots:

    void on_checkBox_toggled(bool checked);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ESP8266CTRL *ui;
    QTcpSocket *socket;
};

#endif // ESP8266CTRL_H
