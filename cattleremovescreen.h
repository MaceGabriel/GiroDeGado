#ifndef CATTLEREMOVESCREEN_H
#define CATTLEREMOVESCREEN_H

#include <QDialog>

namespace Ui {
class CattleRemoveScreen;
}

class CattleRemoveScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleRemoveScreen(QWidget *parent = nullptr);
    ~CattleRemoveScreen();

private:
    Ui::CattleRemoveScreen *ui;
};

#endif // CATTLEREMOVESCREEN_H
