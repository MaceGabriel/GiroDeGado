#include "test/unit/home_unit_test.cpp"
#include "test/unit/cattle_management_unit_test.cpp"
#include "test/unit/cattle_register_unit_test.cpp"
#include "test/unit/financial_management_unit_test.cpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestHomeScreenGUI home;
    QTest::qExec(&home);

    //Adicionar um a um abaixo

    //Teste para a tela de Gerencia de Gado
    TestCattleManagementScreenGUI manag;
    QTest::qExec(&manag);

    //Teste para a tela de Registro de Gado
    TestCattleRegisterScreenGUI reg;
    QTest::qExec(&reg);

    //Teste unitário da tela de Gerencia Financeira
    TestFinancialManagementScreenGUI finanManag;
    QTest::qExec(&finanManag);

    return 0;
}
