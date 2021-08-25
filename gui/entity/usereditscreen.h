/*!
 \file usereditscreen.h
 \brief This file contains the screen for the update of a user in the GiroDeGado software.
*/

#ifndef USEREDITSCREEN_H
#define USEREDITSCREEN_H

#include <QDialog>
#include "../../api/includes/farm.h"

/**
 * \brief
 * This screen represents the edit of a selected user.
*/
namespace Ui {
class UserEditScreen;
}
class UserEditScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen UserEditScreen.
    */
    explicit UserEditScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    /*!
        This is the default destructor for the Screen UserEditScreen.
    */
    ~UserEditScreen();
    /*!
        Returns the Farm.
    */
    Farm* getFarm();

private slots:

    /*!
        Function that performs the action of confirming the user survey.
    */
    void on_okButton_clicked();

    /*!
        Function that performs the action of updating users.
    */
    void on_signButton_clicked();

    /*!
        Function that performs the action of going back to the previous screen.
    */
    void on_backButton_clicked();

private:
    Ui::UserEditScreen *ui_; /*!< This attribute contains the ui for the UserEditScreen. */
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_;/*!< This attribute contains the the Farm. */
};

#endif // USEREDITSCREEN_H
