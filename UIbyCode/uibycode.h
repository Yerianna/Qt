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

private:
    Ui::UIbyCode *ui;
};

#endif // UIBYCODE_H
