#include "homescreen.h"
#include "cattlebirthscreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CattleBirthScreen w;
    w.show();
    return a.exec();
}
