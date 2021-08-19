/*!
 \file cattlebirthscreen.h
 \brief This file contains the screen for the registration of cattle from birth for the GiroDeGado software.
*/

#ifndef CATTLEBIRTHSCREEN_H
#define CATTLEBIRTHSCREEN_H

#include <QDialog>
#include "cattleregisterscreen.h"

/** 
 * \brief
 * This screen that represents the registration of cattle from birth.
*/
namespace Ui {
class CattleBirthScreen;
}

class CattleBirthScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen CattleBirth.
    */
    explicit CattleBirthScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen CattleBirth.
    */
    ~CattleBirthScreen();

    /*!
        Returns the Farm.
    */
    Farm* getFarm();

private slots:
    /*!
        Function that performs the action of going back to the previous screen.
    */
    void on_backButton_clicked();

    /*!
        Function that performs the action of registering cattle.
    */
    void on_registerButton_clicked();

private:
    Ui::CattleBirthScreen *ui_; /*!< This attribute contains the ui for the CattleBirth. */
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_; /*!< This attribute contains the the Farm. */
};

#endif
