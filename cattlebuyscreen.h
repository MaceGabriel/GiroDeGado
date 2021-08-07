#ifndef CATTLEBUYSCREEN_H
#define CATTLEBUYSCREEN_H

#include <QDialog>

namespace Ui {
class CattleBuyScreen;
}

class CattleBuyScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleBuyScreen(QWidget *parent = nullptr);
    ~CattleBuyScreen();

private:
    Ui::CattleBuyScreen *ui;
};

#endif // CATTLEBUYSCREEN_H
