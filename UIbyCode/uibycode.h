#ifndef UIBYCODE_H
#define UIBYCODE_H

#include <QMainWindow>

namespace Ui {
class UIbyCode;
}

class UIbyCode : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIbyCode(QWidget *parent = 0);
    ~UIbyCode();

private slots:
    void on_btnHelllo_clicked();

    void on_btnBye_clicked();

private:
    Ui::UIbyCode *ui;

    QImage img;




};

#endif // UIBYCODE_H
