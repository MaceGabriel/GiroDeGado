/*!
 \file homescreen.h
 \brief This file contains the home screen for the GiroDeGado software.
*/

#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QMainWindow>
#include <string>
#include "../includes/farm.h"

/** 
 * \brief
 * This screen represents the program home.
*/
QT_BEGIN_NAMESPACE
namespace Ui { class HomeScreen; }
QT_END_NAMESPACE

class HomeScreen : public QMainWindow
{
    Q_OBJECT

public:
    HomeScreen(QWidget *parent = nullptr, Farm* f = nullptr);

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
    Farm* farm_; /*!< This attribute contains the the Farm. */
};
#endif // HOMESCREEN_H
