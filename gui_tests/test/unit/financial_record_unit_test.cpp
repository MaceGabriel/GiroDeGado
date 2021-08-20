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


private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    FinancialRecordScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

void TestFinancialRecordScreenGUI::casoDeUsoPrincipal_data(){
    /*
    // ENTRADA
    QTest::addColumn<QPushButton*>("botao");
    QTest::addColumn<QString>("sair");

    // SAIDA
    QTest::newRow("Botao de Gado") << d.ui_->cattleButton << "esc";
    QTest::newRow("Botao de Financeiro") << d.ui_->financialButton << "esc";
    QTest::newRow("Botao de Saida") << d.ui_->exitButton << "";
    */
}

void TestFinancialRecordScreenGUI::casoDeUsoPrincipal(){
        /*
        //QFETCH(QPushButton*, botao);
        //QFETCH(QString, sair);

        QTimer::singleShot(500, this, SLOT(timeOut()));

        // Preenche os campos com login e senhas corretos
        QVERIFY2(d.ui_->label, "Campo não buildado");
        QVERIFY2(d.ui_->cattleButton, "Campo buildado");
        QVERIFY2(d.ui_->financialButton, "Campo buildado");
        QVERIFY2(d.ui_->exitButton, "Campo buildado");
        */

        /*
        QTest::mouseClick(botao, Qt::LeftButton);
        if(sair =="esc")
            QApplication::sendEvent(QApplication::, new QKeyEvent(QEvent::KeyPress  , Qt::Key_Escape, Qt::NoModifier));
        */
}

void TestFinancialRecordScreenGUI::timeOut(){
    /*
    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QMessageBox")) {
            QMessageBox *mb = qobject_cast<QMessageBox *>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
    */
}

#include "financial_record_unit_test.moc"
