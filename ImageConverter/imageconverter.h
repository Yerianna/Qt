#ifndef IMAGECONVERTER_H
#define IMAGECONVERTER_H

#include <QMainWindow>
#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

static const std::string OPENCV_WINDOW = "Image window";

namespace Ui {
class ImageConverter;
}

class ImageConverter : public QMainWindow
{
    Q_OBJECT
    ros::NodeHandle nh_;
      image_transport::ImageTransport it_;
      image_transport::Subscriber image_sub_;
      image_transport::Publisher image_pub_;

public:
    explicit ImageConverter(QWidget *parent = 0) ;
    ~ImageConverter();

private:
    Ui::ImageConverter *ui;
};

#endif // IMAGECONVERTER_H
