#include "display.h"
#include <QApplication>
#include <ros/ros.h>

#include "imageconverter.h"
/*
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Display w;
    w.show();

    return a.exec();


}
*/

int main(int argc, char** argv)
{
  ros::init(argc, argv, "image_converter");
  ImageConverter ic;
  ros::spin();
  return 0;
}
