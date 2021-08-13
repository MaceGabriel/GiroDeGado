#ifndef CATTLEBUYSCREEN_H
#define CATTLEBUYSCREEN_H

#include <QDialog>
#include "cattleregisterscreen.h"

//! Screen CattleBuy
/**
* This screen represents the registration of cattle from purchase.
*/
namespace Ui {
class CattleBuyScreen;
}

class CattleBuyScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen CattleBuy.
    */
    explicit CattleBuyScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen CattleBuy.
    */
    ~CattleBuyScreen();

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
    Ui::CattleBuyScreen *ui; /*!< This attribute contains the ui for the CattleBuy. */
    QWidget* backScreen; /*!< This attribute contains the reference of the back screen. */
    Farm* farm; /*!< This attribute contains the the Farm. */
};

#endif // CATTLEBUYSCREEN_H
