#include "display.h"
#include <QApplication>
#include <ros/ros.h>

#include "imageconverter.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Display w;
    w.show();

    return a.exec();


}
