#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QRadioButton>

#include<iostream>

#include "../gui/entity/homescreen.h"
#include "ui_homescreen.h"

// TESTE UNITARIO COMPORTAMENTAL( funcionalidade + transiÃ§Ãµes)
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
    bool dialogoAberto;
};

void TestHomeScreenGUI::casoDeUsoPrincipal_data(){

    // ENTRADA
    QTest::addColumn<QPushButton*>("botao");
    QTest::addColumn<QString>("sair");

    // SAIDA
    QTest::newRow("Botao de Gado") << d.ui_->cattleButton << "esc";
    QTest::newRow("Botao de Financeiro") << d.ui_->financialButton << "esc";
    QTest::newRow("Botao de Saida") << d.ui_->exitButton << "";
}

void TestHomeScreenGUI::casoDeUsoPrincipal(){
        QFETCH(QPushButton*, botao);
        QFETCH(QString, sair);
        //d.show();


        // necessario para matar o MessageBox ao final do test, sem isso, o teste termina sua execução
        // antes do message box aparacer, tentei milhões de outras maneiras
        QTimer::singleShot(500, this, SLOT(timeOut()));

        // Preenche os campos com login e senhas corretos
        QVERIFY2(d.ui_->label, "Campo não buildado");
        QVERIFY2(d.ui_->cattleButton, "Campo buildado");
        QVERIFY2(d.ui_->financialButton, "Campo buildado");
        QVERIFY2(d.ui_->exitButton, "Campo buildado");

        // pressiona o botão direito do mouse on pushButton "continue"
            QTest::mouseClick(botao, Qt::LeftButton);
            if(sair =="esc")
                QApplication::sendEvent(QApplication::, new QKeyEvent(QEvent::KeyPress  , Qt::Key_Escape, Qt::NoModifier) );
}

void TestHomeScreenGUI::timeOut(){

    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QMessageBox")) {
            QMessageBox *mb = qobject_cast<QMessageBox *>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "unit_test.moc"
