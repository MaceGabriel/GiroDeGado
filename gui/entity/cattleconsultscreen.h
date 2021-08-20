/*!
 \file cattleconsultscreen.h
 \brief This file contains the screen for the consult of cattle for the GiroDeGado software.
*/

#ifndef CATTLECONSULTSCREEN_H
#define CATTLECONSULTSCREEN_H

#include <QDialog>
#include "cattlemanagementscreen.h"

//! Screen CattleConsult
/**
* This screen that represents the cattle consult.
*/
namespace Ui {
class CattleConsultScreen;
}

class CattleConsultScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen CattleConsult.
    */
    explicit CattleConsultScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen CattleConsult.
    */
    ~CattleConsultScreen();

    /*!
        Returns the Farm.
    */
    Farm* getFarm();

private slots:
    /*!
        Function that performs the action of confirming the cattle survey.
    */
    void on_okButton_clicked();

    /*!
        Function that performs the action of going back to the previous screen.
    */
    void on_backButton_clicked();

private:
    Ui::CattleConsultScreen *ui_; /*!< This attribute contains the ui for the CattleConsult. */
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_; /*!< This attribute contains the the Farm. */
};

#endif // CATTLECONSULTSCREEN_H
