#include "esp8266ctrl.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ESP8266CTRL w;
    w.show();

    return a.exec();
}
