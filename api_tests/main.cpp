#include "../api/test/unit/main_unit_test.h"

#include <QApplication>
#include <QtSql>
#include <QFileInfo>

#define UNIT_TEST 1

int main(int argc, char* argv[])
{
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

    QSqlQuery q;
    Farm* f = Farm::getFarm(&q);

    // Execucao dos testes unitarios das classes Cattle, Transaction e Farm
    if(UNIT_TEST){
        //Path dinamico do banco de testes
        QString path_test = QDir::currentPath();
        path_test = path_test + QString("/../../api_tests/bd_giro_tests.db");

        bancoDeDados.setDatabaseName(path_test);
        bancoDeDados.open();

        main_unit_test(f);

        bancoDeDados.close();
    }

    delete f;

    return 0;
}
