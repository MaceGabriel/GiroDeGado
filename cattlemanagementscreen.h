#ifndef CATTLEMANAGEMENTSCREEN_H
#define CATTLEMANAGEMENTSCREEN_H

#include <QDialog>

namespace Ui {
class CattleManagementScreen;
}

class CattleManagementScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleManagementScreen(QWidget *parent = nullptr);
    ~CattleManagementScreen();

private:
    Ui::CattleManagementScreen *ui;
};

#endif // CATTLEMANAGEMENTSCREEN_H
