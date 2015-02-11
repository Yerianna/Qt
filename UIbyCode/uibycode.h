#ifndef UIBYCODE_H
#define UIBYCODE_H

#include <QMainWindow>
#include <QtCore>
#include <QtWidgets>
#include <QLabel>

namespace Ui {
class UIbyCode;
}

class UIbyCode : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIbyCode(int argc, char *argv[], QWidget *parent = 0);
    ~UIbyCode();

private slots:
    void on_btnHelllo_clicked();

    void on_btnBye_clicked();

private:
    Ui::UIbyCode *ui;

    QImage img;

 //   QLabel lblBye;

};

#endif // UIBYCODE_H
