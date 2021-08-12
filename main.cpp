#include "./entity/homescreen.h"
#include "./test/unit/main_unit_test.h"

#include <QApplication>
#include <QtSql>
#include <QFileInfo>

int main(int argc, char *argv[])
{   
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    //Mudar diretório pelo o de sua máquina. Não esqueça de inverter as barras.
    QString path = "C:/Users/Gabriel Mace/Desktop/Faculdade/20.2/Engenharia de Software/GiroDeGado/bd_giro.db";
    bancoDeDados.setDatabaseName(path);

    if(bancoDeDados.open()){
        std::cout << "BD connected" << std::endl;
    } else {
        std::cout << "BD not connected" << std::endl;
    }

    QSqlQuery query;
    //query.exec("insert into transaction (value, description, date, cattle_earring)"
    //           "values (10.0, 'teste', '01/11/2020', '123456')");

    std::cout<<query.exec("SELECT date FROM transaction WHERE id = 3")<<std::endl;
    //query.first();
    //QString b = query.value(0).toString();
    //std::cout<<b.toStdString()<<std::endl;

    QSqlQuery query1("SELECT date FROM transaction");
        while (query1.next()) {
            QString model = query1.value(0).toString();
            std::cout<<model.toStdString()<<std::endl;
        }

    //main_unit_test();

    Farm* f = Farm::createFarm();

    QApplication a(argc, argv);
    HomeScreen w(nullptr, f);
    w.show();
    return a.exec();
}
