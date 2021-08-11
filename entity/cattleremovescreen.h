#ifndef CATTLEREMOVESCREEN_H
#define CATTLEREMOVESCREEN_H

#include <QDialog>
#include "cattlemanagementscreen.h"

namespace Ui {
class CattleRemoveScreen;
}

class CattleRemoveScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleRemoveScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~CattleRemoveScreen();

    Farm* getFarm();

private slots:
    void on_backButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::CattleRemoveScreen *ui;
    QWidget* backScreen;
    Farm* farm;
};

#endif // CATTLEREMOVESCREEN_H
