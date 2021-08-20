#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>

#include<iostream>

#include "../../../gui/entity/cattlemanagementscreen.h"
#include "../ui_cattlemanagementscreen.h"

// TESTE UNITARIO COMPORTAMENTAL (funcionalidade + transicoes)
class TestCattleManagementScreenGUI: public QObject
{
    Q_OBJECT


private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    CattleManagementScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

void TestCattleManagementScreenGUI::casoDeUsoPrincipal_data(){

    // ENTRADA
    QTest::addColumn<QPushButton*>("botao");

    // SAIDA
    QTest::newRow("Botao de Registro") << d.ui_->registerButton;
    QTest::newRow("Botao de Consulta") << d.ui_->queryButton;
    QTest::newRow("Botao de Remocao") << d.ui_->removeButton;

}

void TestCattleManagementScreenGUI::casoDeUsoPrincipal(){

    QFETCH(QPushButton*, botao);

    QTimer::singleShot(500, this, SLOT(timeOut()));

    // Verifica se os componentes da tela estao sendo buildados corretamente.
    QVERIFY2(d.ui_->labelTitle, "Campo não buildado");
    QVERIFY2(d.ui_->registerButton, "Campo buildado");
    QVERIFY2(d.ui_->queryButton, "Campo buildado");
    QVERIFY2(d.ui_->removeButton, "Campo buildado");
    QVERIFY2(d.ui_->backButton, "Campo buildado");



    QTest::mouseClick(botao, Qt::LeftButton);
}

void TestCattleManagementScreenGUI::timeOut(){

    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QDialog") && w != &d) {
            QDialog *mb = qobject_cast<QDialog*>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "cattle_management_unit_test.moc"
