#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <iostream>

#include "../../../gui/entity/usereditscreen.h"
#include "../../../gui/entity/usermanagementscreen.h"
#include "../ui_usereditscreen.h"

// TESTE UNITARIO COMPORTAMENTAL (funcionalidade + transicoes)
class TestUserEditScreenGUI: public QObject
{
    Q_OBJECT

public:
  explicit TestUserEditScreenGUI(QWidget *parent = nullptr, Farm* f = nullptr);

private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    UserEditScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

TestUserEditScreenGUI::TestUserEditScreenGUI(QWidget *parent, Farm* f):QObject(parent){

    d.farm_ = f;
    d.back_screen_ = new UserManagementScreen();

}

void TestUserEditScreenGUI::casoDeUsoPrincipal_data(){
    /*
    // ENTRADA
    QTest::addColumn<QString>("Brinco");
    QTest::addColumn<QPushButton*>("Botao");
    QTest::addColumn<QString>("Raca");
    QTest::addColumn<QString>("DataA");
    QTest::addColumn<QString>("DataB");
    QTest::addColumn<QString>("Pai");
    QTest::addColumn<QString>("Mae");
    QTest::addColumn<QString>("Peso");
    QTest::addColumn<QString>("Valor");

    // SAIDA
    QTest::newRow("Botao de Voltar") << "" << d.ui_->backButton << "" << "" << "" << "" << "" << "" << "";
    QTest::newRow("Edicao correta") << "20" << d.ui_->okButton << "Brangus" << "10/10/20" << "10/10/10" << "1" << "2" << "200" << "10000";
    */
}

void TestUserEditScreenGUI::casoDeUsoPrincipal(){
    /*

    QFETCH(QString, Brinco);
    QFETCH(QPushButton*, Botao);
    QFETCH(QString, Raca);
    QFETCH(QString, DataA);
    QFETCH(QString, DataB);
    QFETCH(QString, Pai);
    QFETCH(QString, Mae);
    QFETCH(QString, Peso);
    QFETCH(QString, Valor);

    QTimer::singleShot(500, this, SLOT(timeOut()));

    // Verifica se os componentes da tela estao sendo buildados corretamente.
    QVERIFY2(d.ui_->labelTitle, "Campo não buildado");
    QVERIFY2(d.ui_->labelEarring, "Campo não buildado");
    QVERIFY2(d.ui_->inputEarring, "Campo não buildado");
    QVERIFY2(d.ui_->okButton, "Campo não buildado");
    QVERIFY2(d.ui_->labelBreed, "Campo não buildado");
    QVERIFY2(d.ui_->inputBreed, "Campo não buildado");
    QVERIFY2(d.ui_->labelDateA, "Campo não buildado");
    QVERIFY2(d.ui_->inputDateA, "Campo não buildado");
    QVERIFY2(d.ui_->labelDateB, "Campo não buildado");
    QVERIFY2(d.ui_->inputDateB, "Campo não buildado");
    QVERIFY2(d.ui_->labelFather, "Campo não buildado");
    QVERIFY2(d.ui_->inputFather, "Campo não buildado");
    QVERIFY2(d.ui_->labelMother, "Campo não buildado");
    QVERIFY2(d.ui_->inputMother, "Campo não buildado");
    QVERIFY2(d.ui_->labelWeight, "Campo não buildado");
    QVERIFY2(d.ui_->inputWeight, "Campo não buildado");
    QVERIFY2(d.ui_->labelPrice, "Campo não buildado");
    QVERIFY2(d.ui_->inputPrice, "Campo não buildado");
    QVERIFY2(d.ui_->editButton, "Campo não buildado");
    QVERIFY2(d.ui_->backButton, "Campo não buildado");

    QTest::keyClicks(d.ui_->inputEarring, Brinco);
    QTest::mouseClick(Botao, Qt::LeftButton);
    QTest::keyClicks(d.ui_->inputBreed, Raca);
    QTest::keyClicks(d.ui_->inputDateA, DataA);
    QTest::keyClicks(d.ui_->inputDateB, DataB);
    QTest::keyClicks(d.ui_->inputWeight, Pai);
    QTest::keyClicks(d.ui_->inputPrice, Mae);
    QTest::keyClicks(d.ui_->inputWeight, Peso);
    QTest::keyClicks(d.ui_->inputPrice, Valor);


    QString earring = d.ui_->inputEarring->text();
    QCOMPARE(d.farm_->getCattleBreed(earring.toInt()), Raca);
    */
}

void TestUserEditScreenGUI::timeOut(){
    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QDialog") && w != &d) {
            QDialog *mb = qobject_cast<QDialog*>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "user_edit_unit_test.moc"
