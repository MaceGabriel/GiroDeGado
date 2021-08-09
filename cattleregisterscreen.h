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
    explicit CattleRegisterScreen(QWidget *parent = nullptr, CattleManagementScreen* backScreen = nullptr);
    ~CattleRegisterScreen();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::CattleRegisterScreen *ui;
    CattleManagementScreen* backScreen;
};

#endif // CATTLEREGISTERSCREEN_H
