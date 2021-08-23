/*!
 \file homescreen.h
 \brief This file contains the home screen for the GiroDeGado software.
*/

#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QDialog>
#include <string>
#include "../../api/includes/farm.h"

/**
 * \brief
 * This screen represents the program home.
*/

namespace Ui {
class HomeScreen;
}

class HomeScreen : public QDialog
{
    Q_OBJECT
    friend class TestHomeScreenGUI;
public:
    HomeScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen Home.
    */
    ~HomeScreen();

    /*!
        Returns the Farm.
    */
    Farm* getFarm();

private slots:
    /*!
        Function that redirects to the cattle management screen.
    */
    void on_cattleButton_clicked();

    /*!
        Function that redirects to the finance management screen.
    */
    void on_financialButton_clicked();

    /*!
        Function that close the program.
    */
    void on_exitButton_clicked();

private:
    Ui::HomeScreen *ui_; /*!< This attribute contains the ui for the Home. */
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_; /*!< This attribute contains the the Farm. */
};
#endif // HOMESCREEN_H
