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
    explicit CattleRemoveScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr);
    ~CattleRemoveScreen();

private slots:
    void on_backButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::CattleRemoveScreen *ui;
    QWidget* backScreen;
};

#endif // CATTLEREMOVESCREEN_H
