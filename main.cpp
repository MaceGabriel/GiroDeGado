#include "./entity/homescreen.h"
#include "./test/unit/main_unit_test.h"

#include <QApplication>

int main(int argc, char *argv[])
{   
    main_unit_test();

    QApplication a(argc, argv);
    HomeScreen w;
    w.show();
    return a.exec();
}
