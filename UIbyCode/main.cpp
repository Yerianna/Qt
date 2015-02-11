#include "uibycode.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UIbyCode w(argc, argv);
    w.show();

    return a.exec();
}
