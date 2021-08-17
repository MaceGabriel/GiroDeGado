#include "./entity/homescreen.h"
#include "./test/unit/main_unit_test.h"

#include <QApplication>
#include <QtSql>
#include <QFileInfo>

#define UNIT_TEST 1

int main(int argc, char *argv[])
{   
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    QString path;

    // Execucao dos testes unitarios das classes Cattle, Transaction e Farm
    if(UNIT_TEST){
        //path = "C:/Users/Gabriel Mace/Desktop/Faculdade/20.2/Engenharia de Software/GiroDeGado/bd_giro_tests.db"; //MACE
        //path = "C:/Users/marcu/Downloads/UFOP/Engenharia/Projeto/GiroDeGado/bd_giro_tests.db"; //MARCUS
        path = "C:/Programas/git/GiroDeGado/bd_giro_tests.db"; //CARLOS

        bancoDeDados.setDatabaseName(path);
        bancoDeDados.open();

        QSqlQuery q_tests;
        Farm* f_tests = Farm::createFarm(0, &q_tests);

        main_unit_test(f_tests);

        delete f_tests;
        bancoDeDados.close();
    }

    //path = "C:/Users/Gabriel Mace/Desktop/Faculdade/20.2/Engenharia de Software/GiroDeGado/bd_giro.db"; //MACE
    //path = "C:/Users/marcu/Downloads/UFOP/Engenharia/Projeto/GiroDeGado/bd_giro.db"; //MARCUS
    path = "C:/Programas/git/GiroDeGado/bd_giro.db"; //CARLOS

    bancoDeDados.setDatabaseName(path);
    bancoDeDados.open();

    QSqlQuery q;
    Farm* f = Farm::createFarm(0, &q);

    QApplication a(argc, argv);
    HomeScreen w(nullptr, f);
    w.show();
    return a.exec();
}
