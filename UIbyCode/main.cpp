#include "uibycode.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UIbyCode w;
    w.show();

    return a.exec();
}
