#include "uibycode.h"
#include "ui_uibycode.h"

UIbyCode::UIbyCode(int argc, char *argv[], QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIbyCode)
{
    ui->setupUi(this);
 //   ui->lblHello->setText(QString::number(argc));
 //   ui->gridLayout->addWidget(*lblBye, 1, 4, 1, 1);
QLabel * lblBye = new QLabel;
QGridLayout * grid = new QGridLayout;
grid->addWidget(lblBye,1,1,1,1);
setCentralWidget(grid);

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
