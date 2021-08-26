#include <QtTest/QtTest>
#include <QtDebug>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <iostream>

#include "../../../gui/entity/usereditscreen.h"
#include "../../../gui/entity/usermanagementscreen.h"
#include "../ui_usereditscreen.h"

// TESTE UNITARIO COMPORTAMENTAL (funcionalidade + transicoes)
class TestUserEditScreenGUI: public QObject
{
    Q_OBJECT

public:
  explicit TestUserEditScreenGUI(QWidget *parent = nullptr, Farm* f = nullptr);

private slots:

    void casoDeUsoPrincipal_data();
    void casoDeUsoPrincipal();    

    void timeOut();

private:
    UserEditScreen d;
    QString msgResult;
    //bool dialogoAberto;
};

TestUserEditScreenGUI::TestUserEditScreenGUI(QWidget *parent, Farm* f):QObject(parent){

    d.farm_ = f;
    d.back_screen_ = new UserManagementScreen();

}

void TestUserEditScreenGUI::casoDeUsoPrincipal_data(){

    // ENTRADA
    QTest::addColumn<QString>("User");
    QTest::addColumn<QPushButton*>("Button");
    QTest::addColumn<QString>("Name");
    QTest::addColumn<QString>("DateB");
    //QTest::addColumn<QString>("Type");
    QTest::addColumn<QString>("NewUser");
    QTest::addColumn<QString>("Password");
    QTest::addColumn<QPushButton*>("Confirm");

    // SAIDA
    //QTest::newRow("Botao de Voltar") << "" << d.ui_->backButton << "" << "" << "" << "" << "" << d.ui_->backButton;
    QTest::newRow("Edicao correta") << "user1" << d.ui_->okButton << "Mateus" << "10/10/20" << "user2" << "1234" << d.ui_->signButton;

}

void TestUserEditScreenGUI::casoDeUsoPrincipal(){


    QFETCH(QString, User);
    QFETCH(QPushButton*, Button);
    QFETCH(QString, Name);
    QFETCH(QString, DateB);
    //QFETCH(QString, Type);
    QFETCH(QString, NewUser);
    QFETCH(QString, Password);
    QFETCH(QPushButton*, Confirm);

    QTimer::singleShot(500, this, SLOT(timeOut()));

    // Verifica se os componentes da tela estao sendo buildados corretamente.
    QVERIFY2(d.ui_->labelTitle, "Campo não buildado");
    QVERIFY2(d.ui_->labelNickname, "Campo não buildado");
    QVERIFY2(d.ui_->inputNickname, "Campo não buildado");
    QVERIFY2(d.ui_->okButton, "Campo não buildado");
    QVERIFY2(d.ui_->labelName, "Campo não buildado");
    QVERIFY2(d.ui_->inputName, "Campo não buildado");
    QVERIFY2(d.ui_->labelBirthDate, "Campo não buildado");
    QVERIFY2(d.ui_->dateEdit, "Campo não buildado");
    QVERIFY2(d.ui_->labelUserType, "Campo não buildado");
    QVERIFY2(d.ui_->userType, "Campo não buildado");
    QVERIFY2(d.ui_->labelNewNickname, "Campo não buildado");
    QVERIFY2(d.ui_->inputNewNickname, "Campo não buildado");
    QVERIFY2(d.ui_->labelPassword, "Campo não buildado");
    QVERIFY2(d.ui_->inputPassword, "Campo não buildado");
    QVERIFY2(d.ui_->signButton, "Campo não buildado");
    QVERIFY2(d.ui_->backButton, "Campo não buildado");

    QTest::keyClicks(d.ui_->inputNickname, User);
    QTest::mouseClick(Button, Qt::LeftButton);
    QTest::keyClicks(d.ui_->inputName, Name);
    QTest::keyClicks(d.ui_->dateEdit, DateB);
    //QTest::keyClicks(d.ui_->inputDateB, DataB);
    QTest::keyClicks(d.ui_->inputNewNickname, NewUser);
    QTest::keyClicks(d.ui_->inputPassword, Password);
    QTest::mouseClick(Confirm, Qt::LeftButton);


    QCOMPARE(d.farm_->getUserName(NewUser.toUtf8().toStdString()), Name);
    //QCOMPARE(d.farm_->getUserNickname(User.toUtf8().toStdString()), "");
}

void TestUserEditScreenGUI::timeOut(){
    // Verificar e fechar message box
    QWidgetList allToplevelWidgets = QApplication::topLevelWidgets();
    foreach (QWidget *w, allToplevelWidgets) {
        if (w->inherits("QDialog") && w != &d) {
            QDialog *mb = qobject_cast<QDialog*>(w);
            QTest::keyClick(mb, Qt::Key_Escape);
        }
    }
}

#include "user_edit_unit_test.moc"
