#ifndef CATTLEREGISTERSCREEN_H
#define CATTLEREGISTERSCREEN_H

#include <QDialog>

namespace Ui {
class CattleRegisterScreen;
}

class CattleRegisterScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleRegisterScreen(QWidget *parent = nullptr);
    ~CattleRegisterScreen();

private:
    Ui::CattleRegisterScreen *ui;
};

#endif // CATTLEREGISTERSCREEN_H
