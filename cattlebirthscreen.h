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
    explicit CattleBirthScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr);
    ~CattleBirthScreen();

private:
    Ui::CattleBirthScreen *ui;
    QWidget* backScreen;
};

#endif // CATTLEBIRTHSCREEN_H
