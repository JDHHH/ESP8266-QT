
#include "esp8266ctrl.h"
#include "ui_esp8266ctrl.h"
#include <QDebug>
#include <synchapi.h>

ESP8266CTRL::ESP8266CTRL(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ESP8266CTRL)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap("://resource/bg1.png").scaled(this->size())));
    this->setPalette(palette);

    socket = new QTcpSocket(this);
}

ESP8266CTRL::~ESP8266CTRL()
{
    delete ui;
}

//socket连接
void ESP8266CTRL::on_checkBox_toggled(bool checked)
{
    if(checked){
        socket->connectToHost("192.168.4.1",8080);
        socket->waitForConnected(5000);
        if(socket->state() != QAbstractSocket::ConnectedState){
            ui->checkBox->setChecked(false);
            QMessageBox::warning(this,"Error","Connect faileure");
        }   
    }
    else{
        if(socket->state()==QAbstractSocket::ConnectedState){
            socket->disconnectFromHost();
        }
    }
}

void ESP8266CTRL::on_pushButton_clicked()
{
   // qint64 mess;
    //socket->read(mess);
    //QString string = mess;
    //for(int i = 0 ;i<6;i++){
        //QByteArray array = socket->readAll();
        //string = array;
        //ui->textBrowser->insertPlainText(mess);
        //ui->textBrowser->insertPlainText("\n");
        //QThread::msleep(1000);
        //Sleep(1000);
   //}
   // string =
}

void ESP8266CTRL::on_pushButton_2_clicked()
{
    ui->textBrowser->clear();
}

void ESP8266CTRL::on_pushButton_3_clicked()
{
    const char* string = "AT+RST";
    int sendFlag = socket->write(string);
    if(-1 == sendFlag){
        QMessageBox::warning(this,"Error","发送失败！");
    }
}
