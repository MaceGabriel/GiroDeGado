#include "test/unit/home_unit_test.cpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestHomeScreenGUI x;
    QTest::qExec(&x);

    //Adicionar um a um abaixo

    return a.exec();
}
