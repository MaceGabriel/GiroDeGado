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
    explicit CattleManagementScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr);
    ~CattleManagementScreen();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::CattleManagementScreen *ui;
    QWidget* backScreen;
};

#endif // CATTLEMANAGEMENTSCREEN_H
