#ifndef CATTLEBIRTHSCREEN_H
#define CATTLEBIRTHSCREEN_H

#include <QDialog>

namespace Ui {
class CattleBirthScreen;
}

class CattleBirthScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CattleBirthScreen(QWidget *parent = nullptr);
    ~CattleBirthScreen();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::CattleBirthScreen *ui;
};

#endif // CATTLEBIRTHSCREEN_H
