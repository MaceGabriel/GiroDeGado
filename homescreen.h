#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class HomeScreen; }
QT_END_NAMESPACE

class HomeScreen : public QMainWindow
{
    Q_OBJECT

public:
    HomeScreen(QWidget *parent = nullptr);
    ~HomeScreen();

private slots:
    void on_exitButton_clicked();

    void on_cattleButton_clicked();

    void on_financialButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::HomeScreen *ui;
};
#endif // HOMESCREEN_H
