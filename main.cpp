#include "homescreen.h"
#include "financialremovescreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FinancialRemoveScreen w;
    w.show();
    return a.exec();
}
