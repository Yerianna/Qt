#include "imageconverter.h"
#include "ui_imageconverter.h"

ImageConverter::ImageConverter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageConverter)
{
    ui->setupUi(this);
}

ImageConverter::~ImageConverter()
{
    delete ui;
}
