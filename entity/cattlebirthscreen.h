#ifndef CATTLEBIRTHSCREEN_H
#define CATTLEBIRTHSCREEN_H

#include <QDialog>
#include "cattleregisterscreen.h"

namespace Ui {
class CattleBirthScreen;
}

class CattleBirthScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleBirthScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr, QSqlQuery* query = nullptr);
    ~CattleBirthScreen();

    Farm* getFarm();
    QSqlQuery* getQuery();

private slots:
    void on_backButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::CattleBirthScreen *ui;
    QWidget* backScreen;
    Farm* farm;
    QSqlQuery* query;
};

#endif // CATTLEBIRTHSCREEN_H
