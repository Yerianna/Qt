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

void UIbyCode::on_btnHelllo_clicked()
{
    ui->lblHello->setText("Hello!");
}

void UIbyCode::on_btnBye_clicked()
{
    ui->lblHello->setText("Bye~");
}
