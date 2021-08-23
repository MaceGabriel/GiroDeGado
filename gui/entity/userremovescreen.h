#ifndef USERREMOVESCREEN_H
#define USERREMOVESCREEN_H

#include <QDialog>
#include "../../api/includes/farm.h"

namespace Ui {
class UserRemoveScreen;
}

class UserRemoveScreen : public QDialog
{
    Q_OBJECT

public:
    explicit UserRemoveScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~UserRemoveScreen();
    Farm* getFarm();

private slots:
    void on_removeButton_clicked();

    void on_backButton_clicked();

    void on_okButton_clicked();

private:
    Ui::UserRemoveScreen *ui;
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_;
};

#endif // USERREMOVESCREEN_H
