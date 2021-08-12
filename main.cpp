#include "./entity/homescreen.h"
#include "./test/unit/main_unit_test.h"

#include <QApplication>
#include <QtSql>
#include <QFileInfo>

int main(int argc, char *argv[])
{   
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    //Mudar diretório pelo o de sua máquina. Não esqueça de inverter as barras.
    //QString path = "C:/Users/Gabriel Mace/Desktop/Faculdade/20.2/Engenharia de Software/GiroDeGado/bd_giro.db"; //MACE
    QString path = "C:/Users/marcu/Downloads/UFOP/Engenharia/Projeto/GiroDeGado/bd_giro.db"; //MARCUS
    bancoDeDados.setDatabaseName(path);

    if(bancoDeDados.open()){
        std::cout << "BD connected" << std::endl;
    } else {
        std::cout << "BD not connected" << std::endl;
    }

    main_unit_test();

    Farm* f = Farm::createFarm();

    QApplication a(argc, argv);
    HomeScreen w(nullptr, f);
    w.show();
    return a.exec();
}
