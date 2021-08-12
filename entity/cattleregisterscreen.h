#ifndef CATTLEREGISTERSCREEN_H
#define CATTLEREGISTERSCREEN_H

#include <QDialog>
#include "cattlemanagementscreen.h"

namespace Ui {
class CattleRegisterScreen;
}

class CattleRegisterScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleRegisterScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~CattleRegisterScreen();

    Farm* getFarm();

private slots:
    void on_buyButton_clicked();

    void on_backButton_clicked();

    void on_birthButton_clicked();

private:
    Ui::CattleRegisterScreen *ui;
    QWidget* backScreen;
    Farm* farm;
};

#endif // CATTLEREGISTERSCREEN_H