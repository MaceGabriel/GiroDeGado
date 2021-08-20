#include "mainwindow.h"
#include "unit_test.cpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestHomeScreenGUI x;
    QTest::qExec(&x);

    return a.exec();
}
