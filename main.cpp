#include "./entity/homescreen.h"
#include "./test/unit/main_unit_test.h"

#include <QApplication>
#include <QtSql>
#include <QFileInfo>

int main(int argc, char *argv[])
{   
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    //Mudar diretório pelo o de sua máquina. Não esqueça de inverter as barras.
    bancoDeDados.setDatabaseName("C:/Users/marcu/Downloads/UFOP/Engenharia/Projeto/GiroDeGado/bd_giro.db");

    if(bancoDeDados.open()){
        std::cout << "BD connected" << std::endl;
    } else {
        std::cout << "BD not connected" << std::endl;
    }

    QSqlQuery query;
    query.exec("insert into transaction (value, description, date, cattle_earring)"
               "values (10.0, 'teste', '01/11/2020', '123456')");

    //main_unit_test();

    Farm* f = Farm::createFarm();

    QApplication a(argc, argv);
    HomeScreen w(nullptr, f);
    w.show();
    return a.exec();
}
