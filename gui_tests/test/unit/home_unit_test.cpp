#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <iostream>

#include "../../../gui/entity/homescreen.h"
#include "../ui_homescreen.h"

// TESTE UNITARIO COMPORTAMENTAL (funcionalidade + transicoes)
class TestHomeScreenGUI: public QObject
{
    Q_OBJECT


private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    HomeScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

void TestHomeScreenGUI::casoDeUsoPrincipal_data(){

    // ENTRADA
    QTest::addColumn<QPushButton*>("botao");    

    // SAIDA
    QTest::newRow("Botao de Gado") << d.ui_->cattleButton;
    QTest::newRow("Botao de Financeiro") << d.ui_->financialButton;
    QTest::newRow("Botao de Saida") << d.ui_->exitButton;

}

void TestHomeScreenGUI::casoDeUsoPrincipal(){
        QFETCH(QPushButton*, botao);

        QTimer::singleShot(500, this, SLOT(timeOut()));

        // Verifica se os componentes da tela estao sendo buildados corretamente.
        QVERIFY2(d.ui_->label, "Campo não buildado");
        QVERIFY2(d.ui_->cattleButton, "Campo não buildado");
        QVERIFY2(d.ui_->financialButton, "Campo não buildado");
        QVERIFY2(d.ui_->exitButton, "Campo não buildado");


        QTest::mouseClick(botao, Qt::LeftButton);

}

void TestHomeScreenGUI::timeOut(){

    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QDialog")) {
            QDialog *mb = qobject_cast<QDialog*>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "home_unit_test.moc"
