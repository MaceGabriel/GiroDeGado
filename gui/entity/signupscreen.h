#ifndef SIGNUPSCREEN_H
#define SIGNUPSCREEN_H

#include <QDialog>

namespace Ui {
class SignUpScreen;
}

class SignUpScreen : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpScreen(QWidget *parent = nullptr);
    ~SignUpScreen();

private slots:
    void on_dateEdit_userDateChanged(const QDate &date);

private:
    Ui::SignUpScreen *ui;
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
};

#endif // SIGNUPSCREEN_H
