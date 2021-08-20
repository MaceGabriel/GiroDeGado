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


private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    CattleBuyScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

void TestCattleBuyScreenGUI::casoDeUsoPrincipal_data(){
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

void TestCattleBuyScreenGUI::casoDeUsoPrincipal(){
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

void TestCattleBuyScreenGUI::timeOut(){
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

#include "cattle_buy_unit_test.moc"
