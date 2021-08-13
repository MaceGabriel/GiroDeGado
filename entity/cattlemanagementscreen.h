#ifndef CATTLEMANAGEMENTSCREEN_H
#define CATTLEMANAGEMENTSCREEN_H

#include <QDialog>
#include "homescreen.h"

//! Screen CattleManagement
/**
* This screen represents the management of all features related to the cattle.
*/
namespace Ui {
class CattleManagementScreen;
}

class CattleManagementScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen CattleManagement.
    */
    explicit CattleManagementScreen(QWidget* parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen CattleManagement.
    */
    ~CattleManagementScreen();

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
        Function that redirects to the cattle registration screen.
    */
    void on_registerButton_clicked();

    /*!
        Function that redirects to the cattle query screen.
    */
    void on_queryButton_clicked();

    /*!
        Function that redirects to cattle update screen.
    */
    void on_updateButton_clicked();

    /*!
        Function that redirects to the cattle removal screen.
    */
    void on_removeButton_clicked();

private:
    Ui::CattleManagementScreen* ui; /*!< This attribute contains the ui for the CattleManagement. */
    QWidget* backScreen; /*!< This attribute contains the reference of the back screen. */
    Farm* farm; /*!< This attribute contains the the Farm. */
};

#endif // CATTLEMANAGEMENTSCREEN_H
