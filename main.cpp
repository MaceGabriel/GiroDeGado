#include "./entity/homescreen.h"
#include "./test/unit/main_unit_test.h"

#include <QApplication>
#include <QtSql>
#include <QFileInfo>

int main(int argc, char *argv[])
{   
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

    //QString path = "C:/Users/Gabriel Mace/Desktop/Faculdade/20.2/Engenharia de Software/GiroDeGado/bd_giro.db"; //MACE
    //QString path = "C:/Users/marcu/Downloads/UFOP/Engenharia/Projeto/GiroDeGado/bd_giro.db"; //MARCUS
    QString path = "C:/Programas/git/GiroDeGado/bd_giro.db"; //CARLOS
    bancoDeDados.setDatabaseName(path);
    bancoDeDados.open();

    main_unit_test();

    QSqlQuery q;
    Farm* f = Farm::createFarm();

    QApplication a(argc, argv);
    HomeScreen w(nullptr, f, &q);
    w.show();
    return a.exec();
}
