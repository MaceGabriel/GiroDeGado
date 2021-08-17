#ifndef CATTLEEDITSCREEN_H
#define CATTLEEDITSCREEN_H

#include <QDialog>
#include "cattlemanagementscreen.h"

//! Screen CattleEdit
/**
* This screen that represents the cattle edition.
*/
namespace Ui {
class CattleEditScreen;
}

class CattleEditScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen CattleEdit.
    */
    explicit CattleEditScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen CattleEdit.
    */
    ~CattleEditScreen();

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
        Function that performs the action of updating cattle.
    */
    void on_editButton_clicked();

    /*!
        Function that performs the action of going back to the previous screen.
    */
    void on_backButton_clicked();

private:
    Ui::CattleEditScreen *ui; /*!< This attribute contains the ui for the CattleEdit. */
    QWidget* backScreen; /*!< This attribute contains the reference of the back screen. */
    Farm* farm; /*!< This attribute contains the the Farm. */
};

#endif // CATTLEEDITSCREEN_H
