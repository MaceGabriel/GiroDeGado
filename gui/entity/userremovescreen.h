/*!
 \file userremovescreen.h
 \brief This file contains the screen for the removal of a user in the GiroDeGado software.
*/

#ifndef USERREMOVESCREEN_H
#define USERREMOVESCREEN_H

#include <QDialog>
#include "../../api/includes/farm.h"

/**
 * \brief
 * This screen represents the removal of a user.
*/
namespace Ui {
class UserRemoveScreen;
}
class UserRemoveScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen UserRemoveScreen.
    */
    explicit UserRemoveScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    /*!
        This is the default destructor for the Screen UserRemoveScreen.
    */
    ~UserRemoveScreen();
    /*!
        Returns the Farm.
    */
    Farm* getFarm();

private slots:
    /*!
        Function that performs the action of removing a record.
    */
    void on_removeButton_clicked();

    /*!
        Function that performs the action of going back to the previous screen.
    */
    void on_backButton_clicked();

    /*!
        Function that performs the action of confirming the user survey.
    */
    void on_okButton_clicked();

private:
    Ui::UserRemoveScreen *ui_; /*!< This attribute contains the ui for the UserRemoveScreen. */
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_; /*!< This attribute contains the the Farm. */
};

#endif // USERREMOVESCREEN_H
