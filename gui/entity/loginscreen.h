#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QMainWindow>
#include "../../api/includes/farm.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LoginScreen; }
QT_END_NAMESPACE

class LoginScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = nullptr, Farm* f = nullptr);
    ~LoginScreen();
    Farm* getFarm();

private slots:
    void on_loginButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::LoginScreen *ui_;
    Farm* farm_;
};

#endif // LOGINSCREEN_H
