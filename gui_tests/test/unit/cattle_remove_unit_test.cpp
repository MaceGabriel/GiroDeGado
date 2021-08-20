#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QRadioButton>
#include <iostream>

#include "../../../gui/entity/cattleremovescreen.h"
#include "../ui_cattleremovescreen.h"

// TESTE UNITARIO COMPORTAMENTAL (funcionalidade + transicoes)
class TestCattleRemoveScreenGUI: public QObject
{
    Q_OBJECT

public:
  explicit TestCattleRemoveScreenGUI(QWidget *parent = nullptr, Farm* f = nullptr);

private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    CattleRemoveScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

TestCattleRemoveScreenGUI::TestCattleRemoveScreenGUI(QWidget *parent, Farm* f):QObject(parent){
    d.farm_ = f;
    d.backScreen_ = new CattleManagementScreen();
}

void TestCattleRemoveScreenGUI::casoDeUsoPrincipal_data(){
    // ENTRADA
    QTest::addColumn<QPushButton*>("botao");

    // SAIDA
    QTest::newRow("Botao de Voltar") << d.ui_->backButton;
}

void TestCattleRemoveScreenGUI::casoDeUsoPrincipal(){

        QFETCH(QPushButton*, botao);

        QTimer::singleShot(500, this, SLOT(timeOut()));

        // Verifica se os componentes da tela estao sendo buildados corretamente.
        QVERIFY2(d.ui_->labelTitle, "Campo não buildado");
        QVERIFY2(d.ui_->labelCattleEarring, "Campo não buildado");
        QVERIFY2(d.ui_->inputCattleEarring, "Campo não buildado");
        QVERIFY2(d.ui_->okButton, "Campo não buildado");
        QVERIFY2(d.ui_->cattleRemoveTable, "Campo não buildado");
        QVERIFY2(d.ui_->labelReason, "Campo não buildado");
        QVERIFY2(d.ui_->radioButtonDeath, "Campo não buildado");
        QVERIFY2(d.ui_->radioButtonSell, "Campo não buildado");
        QVERIFY2(d.ui_->labelPrice, "Campo não buildado");
        QVERIFY2(d.ui_->inputPrice, "Campo não buildado");
        QVERIFY2(d.ui_->removeButton, "Campo não buildado");
        QVERIFY2(d.ui_->backButton, "Campo não buildado");


        QTest::mouseClick(botao, Qt::LeftButton);
}

void TestCattleRemoveScreenGUI::timeOut(){
    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QDialog") && w != &d) {
            QDialog *mb = qobject_cast<QDialog*>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "cattle_remove_unit_test.moc"
