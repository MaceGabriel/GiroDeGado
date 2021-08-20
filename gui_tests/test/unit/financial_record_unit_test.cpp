#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QRadioButton>

#include<iostream>

#include "../../../gui/entity/financialrecordscreen.h"
#include "../ui_financialrecordscreen.h"

// TESTE UNITARIO COMPORTAMENTAL (funcionalidade + transicoes)
class TestFinancialRecordScreenGUI: public QObject
{
    Q_OBJECT

public:
  explicit TestFinancialRecordScreenGUI(QWidget *parent = nullptr, Farm* f = nullptr);

private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    FinancialRecordScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

TestFinancialRecordScreenGUI::TestFinancialRecordScreenGUI(QWidget *parent, Farm* f):QObject(parent){
    d.farm_ = f;
    d.backScreen_ = new FinancialManagementScreen();
}

void TestFinancialRecordScreenGUI::casoDeUsoPrincipal_data(){
    // ENTRADA
    QTest::addColumn<QPushButton*>("botao");

    // SAIDA
    QTest::newRow("Botao de Voltar") << d.ui_->backButton;
}

void TestFinancialRecordScreenGUI::casoDeUsoPrincipal(){

        QFETCH(QPushButton*, botao);

        QTimer::singleShot(500, this, SLOT(timeOut()));

        // Verifica se os componentes da tela estao sendo buildados corretamente.
        QVERIFY2(d.ui_->labelTitle, "Campo não buildado");
        QVERIFY2(d.ui_->labelTransaction, "Campo não buildado");
        QVERIFY2(d.ui_->labelIdTransaction, "Campo não buildado");
        QVERIFY2(d.ui_->labelPrice, "Campo não buildado");
        QVERIFY2(d.ui_->inputPrice, "Campo não buildado");
        QVERIFY2(d.ui_->labelDate, "Campo não buildado");
        QVERIFY2(d.ui_->inputDate, "Campo não buildado");
        QVERIFY2(d.ui_->labelEarring, "Campo não buildado");
        QVERIFY2(d.ui_->inputEarring, "Campo não buildado");
        QVERIFY2(d.ui_->labelDescription, "Campo não buildado");
        QVERIFY2(d.ui_->inputDescription, "Campo não buildado");
        QVERIFY2(d.ui_->registerButton, "Campo não buildado");
        QVERIFY2(d.ui_->backButton, "Campo não buildado");


        QTest::mouseClick(botao, Qt::LeftButton);
}

void TestFinancialRecordScreenGUI::timeOut(){
    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QDialog") && w != &d) {
            QDialog *mb = qobject_cast<QDialog*>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "financial_record_unit_test.moc"
