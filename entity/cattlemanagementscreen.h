#ifndef CATTLEMANAGEMENTSCREEN_H
#define CATTLEMANAGEMENTSCREEN_H

#include <QDialog>
#include "homescreen.h"

namespace Ui {
class CattleManagementScreen;
}

class CattleManagementScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleManagementScreen(QWidget* parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr, QSqlQuery* query = nullptr);
    ~CattleManagementScreen();

    Farm* getFarm();
    QSqlQuery* getQuery();

private slots:
    void on_backButton_clicked();

    void on_registerButton_clicked();

    void on_queryButton_clicked();

    void on_updateButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::CattleManagementScreen* ui;
    QWidget* backScreen;
    Farm* farm;
    QSqlQuery* query;
};

#endif // CATTLEMANAGEMENTSCREEN_H
