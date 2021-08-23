#ifndef SIGNUPSCREEN_H
#define SIGNUPSCREEN_H

#include <QDialog>
#include "../../api/includes/farm.h"

namespace Ui {
class SignUpScreen;
}

class SignUpScreen : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~SignUpScreen();
    Farm* getFarm();

private slots:
    void on_dateEdit_userDateChanged(const QDate &date);

    void on_backButton_clicked();

private:
    Ui::SignUpScreen *ui;
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_;
};

#endif // SIGNUPSCREEN_H
