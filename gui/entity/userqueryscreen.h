#ifndef USERQUERYSCREEN_H
#define USERQUERYSCREEN_H

#include <QDialog>
#include "../../api/includes/farm.h"

namespace Ui {
class UserQueryScreen;
}

class UserQueryScreen : public QDialog
{
    Q_OBJECT

public:
    explicit UserQueryScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~UserQueryScreen();
    Farm* getFarm();

private slots:
    void on_okButton_clicked();

    void on_backButton_clicked();

private:
    Ui::UserQueryScreen *ui_;
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_;
};

#endif // USERQUERYSCREEN_H
