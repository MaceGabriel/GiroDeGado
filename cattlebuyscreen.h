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
    explicit CattleBuyScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr);
    ~CattleBuyScreen();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::CattleBuyScreen *ui;
    QWidget* backScreen;
};

#endif // CATTLEBUYSCREEN_H
