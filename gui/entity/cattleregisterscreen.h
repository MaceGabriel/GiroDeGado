/*!
 \file cattleregisterscreen.h
 \brief This file contains the screen for the cattle registration options for the GiroDeGado software.
*/

#ifndef CATTLEREGISTERSCREEN_H
#define CATTLEREGISTERSCREEN_H

#include <QDialog>
#include "cattlemanagementscreen.h"

/** 
 * \brief
 * This screen represents the management of cattle registration options.
*/
namespace Ui {
class CattleRegisterScreen;
}

class CattleRegisterScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen CattleRegister.
    */
    explicit CattleRegisterScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen CattleRegister.
    */
    ~CattleRegisterScreen();

    /*!
        Returns the Farm.
    */
    Farm* getFarm();

private slots:
    /*!
        Function that redirects to the registration screen of cattle from purchase.
    */
    void on_buyButton_clicked();

    /*!
        Function that performs the action of going back to the previous screen.
    */
    void on_backButton_clicked();

    /*!
        Function that redirects to the registration screen of cattle from birth.
    */
    void on_birthButton_clicked();

private:
    Ui::CattleRegisterScreen *ui_; /*!< This attribute contains the ui for the CattleRegister. */
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_; /*!< This attribute contains the the Farm. */
};

#endif // CATTLEREGISTERSCREEN_H
