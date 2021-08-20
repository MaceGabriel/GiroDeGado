#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>

#include<iostream>

#include "../../../gui/entity/cattlebuyscreen.h"
#include "../ui_cattlebuyscreen.h"

// TESTE UNITARIO COMPORTAMENTAL (funcionalidade + transicoes)
class TestCattleBuyScreenGUI: public QObject
{
    Q_OBJECT

public:
  explicit TestCattleBuyScreenGUI(QWidget *parent = nullptr, Farm* f = nullptr);

private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    CattleBuyScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

TestCattleBuyScreenGUI::TestCattleBuyScreenGUI(QWidget *parent, Farm* f):QObject(parent){
    d.farm_ = f;
    d.backScreen_ = new CattleRegisterScreen();
}

void TestCattleBuyScreenGUI::casoDeUsoPrincipal_data(){
    // ENTRADA
    QTest::addColumn<QPushButton*>("botao");

    // SAIDA
    QTest::newRow("Botao de Voltar") << d.ui_->backButton;
}

void TestCattleBuyScreenGUI::casoDeUsoPrincipal(){

        QFETCH(QPushButton*, botao);

        QTimer::singleShot(500, this, SLOT(timeOut()));

        // Verifica se os componentes da tela estao sendo buildados corretamente.
        QVERIFY2(d.ui_->labelTitle, "Campo não buildado");
        QVERIFY2(d.ui_->labelEarring, "Campo não buildado");
        QVERIFY2(d.ui_->labelCattleEarring, "Campo não buildado");
        QVERIFY2(d.ui_->labelBreed, "Campo não buildado");
        QVERIFY2(d.ui_->inputBreed, "Campo não buildado");
        QVERIFY2(d.ui_->labelDateA, "Campo não buildado");
        QVERIFY2(d.ui_->inputDateA, "Campo não buildado");
        QVERIFY2(d.ui_->labelDateB, "Campo não buildado");
        QVERIFY2(d.ui_->inputDateB, "Campo não buildado");
        QVERIFY2(d.ui_->labelWeight, "Campo não buildado");
        QVERIFY2(d.ui_->inputWeight, "Campo não buildado");
        QVERIFY2(d.ui_->labelPrice, "Campo não buildado");
        QVERIFY2(d.ui_->inputPrice, "Campo não buildado");
        QVERIFY2(d.ui_->registerButton, "Campo não buildado");
        QVERIFY2(d.ui_->backButton, "Campo não buildado");

        QTest::mouseClick(botao, Qt::LeftButton);
}

void TestCattleBuyScreenGUI::timeOut(){
    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QDialog") && w != &d) {
            QDialog *mb = qobject_cast<QDialog*>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "cattle_buy_unit_test.moc"
