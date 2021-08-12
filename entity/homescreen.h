#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QMainWindow>
#include <string>
#include "../includes/farm.h"

QT_BEGIN_NAMESPACE
namespace Ui { class HomeScreen; }
QT_END_NAMESPACE

class HomeScreen : public QMainWindow
{
    Q_OBJECT

public:
    HomeScreen(QWidget *parent = nullptr, Farm* f = nullptr);
    ~HomeScreen();

    Farm* getFarm();

private slots:    

    void on_cattleButton_clicked();

    void on_financialButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::HomeScreen *ui;
    Farm* farm;
};
#endif // HOMESCREEN_H