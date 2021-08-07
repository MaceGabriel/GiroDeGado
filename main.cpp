#include "homescreen.h"
#include "cattlebuyscreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CattleBuyScreen w;
    w.show();
    return a.exec();
}
