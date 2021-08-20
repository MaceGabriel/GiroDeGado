#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>

#include<iostream>

#include "../../../gui/entity/financialconsultscreen.h"
#include "../ui_financialconsultscreen.h"

// TESTE UNITARIO COMPORTAMENTAL (funcionalidade + transicoes)
class TestFinancialConsultScreenGUI: public QObject
{
    Q_OBJECT

public:
  explicit TestFinancialConsultScreenGUI(QWidget *parent = nullptr, Farm* f = nullptr);

private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    FinancialConsultScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

TestFinancialConsultScreenGUI::TestFinancialConsultScreenGUI(QWidget *parent, Farm* f):QObject(parent){
    d.farm_ = f;
    d.backScreen_ = new FinancialManagementScreen();
}

void TestFinancialConsultScreenGUI::casoDeUsoPrincipal_data(){
    // ENTRADA
    QTest::addColumn<QPushButton*>("botao");

    // SAIDA
    QTest::newRow("Botao de Voltar") << d.ui_->backButton;
}

void TestFinancialConsultScreenGUI::casoDeUsoPrincipal(){

        QFETCH(QPushButton*, botao);

        QTimer::singleShot(500, this, SLOT(timeOut()));

        // Verifica se os componentes da tela estao sendo buildados corretamente.
        QVERIFY2(d.ui_->labelTitle, "Campo não buildado");
        QVERIFY2(d.ui_->labelTransactionDate, "Campo não buildado");
        QVERIFY2(d.ui_->inputTransactionDate, "Campo não buildado");
        QVERIFY2(d.ui_->okButton, "Campo não buildado");
        QVERIFY2(d.ui_->okButton, "Campo não buildado");
        QVERIFY2(d.ui_->backButton, "Campo não buildado");


        QTest::mouseClick(botao, Qt::LeftButton);
}

void TestFinancialConsultScreenGUI::timeOut(){
    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QDialog") && w != &d) {
            QDialog *mb = qobject_cast<QDialog*>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "financial_consult_unit_test.moc"
