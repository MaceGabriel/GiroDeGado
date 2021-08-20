#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <iostream>

#include "../../../gui/entity/cattleeditscreen.h"
#include "../ui_cattleeditscreen.h"

// TESTE UNITARIO COMPORTAMENTAL (funcionalidade + transicoes)
class TestCattleEditScreenGUI: public QObject
{
    Q_OBJECT

public:
  explicit TestCattleEditScreenGUI(QWidget *parent = nullptr, Farm* f = nullptr);

private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    CattleEditScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

TestCattleEditScreenGUI::TestCattleEditScreenGUI(QWidget *parent, Farm* f):QObject(parent){
    d.farm_ = f;
    d.backScreen_ = new CattleManagementScreen();
}

void TestCattleEditScreenGUI::casoDeUsoPrincipal_data(){
    // ENTRADA
    QTest::addColumn<QString>("Brinco");
    QTest::addColumn<QString>("Raca");
    QTest::addColumn<QString>("DataA");
    QTest::addColumn<QString>("DataB");
    QTest::addColumn<QString>("Pai");
    QTest::addColumn<QString>("Mae");
    QTest::addColumn<QString>("Peso");
    QTest::addColumn<QString>("Valor");
    QTest::addColumn<QPushButton*>("Botao");
    QTest::addColumn<QPushButton*>("botao");

    // SAIDA
    QTest::newRow("Botao de Voltar") << "" << "" << "" << "" << "" << "" << "" << "" << d.ui_->backButton;
    QTest::newRow("Cadastro correto") << "20" << "Brangus" << "10/10/20" << "10/10/10" << "1" << "2" << "200" << "10000" << d.ui_->okButton;
}

void TestCattleEditScreenGUI::casoDeUsoPrincipal(){

    QFETCH(QString, Raca);
    QFETCH(QString, DataA);
    QFETCH(QString, DataB);
    QFETCH(QString, Pai);
    QFETCH(QString, Mae);
    QFETCH(QString, Peso);
    QFETCH(QString, Valor);
    QFETCH(QPushButton*, Botao);

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

    QTest::keyClicks(d.ui_->inputBreed, Raca);
    QTest::keyClicks(d.ui_->inputDateA, DataA);
    QTest::keyClicks(d.ui_->inputDateB, DataB);
    QTest::keyClicks(d.ui_->inputWeight, Pai);
    QTest::keyClicks(d.ui_->inputPrice, Mae);
    QTest::keyClicks(d.ui_->inputWeight, Peso);
    QTest::keyClicks(d.ui_->inputPrice, Valor);
    QTest::mouseClick(Botao, Qt::LeftButton);

    //QCOMPARE(d->farm_->getCattleBreed(earring.toInt()), Raca);
}

void TestCattleEditScreenGUI::timeOut(){
    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QDialog") && w != &d) {
            QDialog *mb = qobject_cast<QDialog*>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "cattle_edit_unit_test.moc"
