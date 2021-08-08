#include "homescreen.h"
#include "financialrecordscreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FinancialRecordScreen w;
    w.show();
    return a.exec();
}
