#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QDialog>

namespace Ui {
class HomeScreen;
}

class HomeScreen : public QDialog
{
    Q_OBJECT

public:
    explicit HomeScreen(QWidget *parent = nullptr);
    ~HomeScreen();

private:
    Ui::HomeScreen *ui;
};

#endif // HOMESCREEN_H
