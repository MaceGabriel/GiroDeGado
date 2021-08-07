#include "homescreen.h"
#include "cattleregisterscreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CattleRegisterScreen w;
    w.show();
    return a.exec();
}
