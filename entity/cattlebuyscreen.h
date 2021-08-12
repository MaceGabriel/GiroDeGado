#ifndef CATTLEBUYSCREEN_H
#define CATTLEBUYSCREEN_H

#include <QDialog>
#include "cattleregisterscreen.h"

namespace Ui {
class CattleBuyScreen;
}

class CattleBuyScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleBuyScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr, QSqlQuery* query = nullptr);
    ~CattleBuyScreen();

    Farm* getFarm();
    QSqlQuery* getQuery();

private slots:
    void on_backButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::CattleBuyScreen *ui;
    QWidget* backScreen;
    Farm* farm;
    QSqlQuery* query;
};

#endif // CATTLEBUYSCREEN_H
