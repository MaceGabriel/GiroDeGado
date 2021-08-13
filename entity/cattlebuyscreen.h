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
    explicit CattleBuyScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~CattleBuyScreen();

    Farm* getFarm();

private slots:
    void on_backButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::CattleBuyScreen *ui;
    QWidget* backScreen;
    Farm* farm;
};

#endif // CATTLEBUYSCREEN_H
