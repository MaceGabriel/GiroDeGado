#include "homescreen.h"
#include "cattlemanagementscreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CattleManagementScreen w;
    w.show();
    return a.exec();
}
