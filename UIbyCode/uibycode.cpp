#include "uibycode.h"
#include "ui_uibycode.h"

UIbyCode::UIbyCode(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIbyCode)
{
    ui->setupUi(this);
}

UIbyCode::~UIbyCode()
{
    delete ui;
}
