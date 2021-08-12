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
    explicit CattleRemoveScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr, QSqlQuery* query = nullptr);
    ~CattleRemoveScreen();

    Farm* getFarm();
    QSqlQuery* getQuery();

private slots:
    void on_backButton_clicked();

    void on_removeButton_clicked();

    void on_radioButtonDeath_clicked();

    void on_okButton_clicked();

    void on_radioButtonSell_clicked();

private:
    Ui::CattleRemoveScreen *ui;
    QWidget* backScreen;
    Farm* farm;
    QSqlQuery* query;
};

#endif // CATTLEREMOVESCREEN_H
