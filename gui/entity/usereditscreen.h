#ifndef USEREDITSCREEN_H
#define USEREDITSCREEN_H

#include <QDialog>
#include "../../api/includes/farm.h"

namespace Ui {
class UserEditScreen;
}

class UserEditScreen : public QDialog
{
    Q_OBJECT

public:
    explicit UserEditScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~UserEditScreen();
    Farm* getFarm();

private slots:
    void on_okButton_clicked();

    void on_signButton_clicked();

    void on_backButton_clicked();

private:
    Ui::UserEditScreen *ui_;
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_;
};

#endif // USEREDITSCREEN_H
