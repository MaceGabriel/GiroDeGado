#ifndef CATTLEREMOVESCREEN_H
#define CATTLEREMOVESCREEN_H

#include <QDialog>
#include "cattlemanagementscreen.h"

//! Screen CattleRemove
/**
* This screen represents cattle removals.
*/
namespace Ui {
class CattleRemoveScreen;
}

class CattleRemoveScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen CattleRemove.
    */
    explicit CattleRemoveScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen CattleRemove.
    */
    ~CattleRemoveScreen();

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
        Function that performs the action of removing a cattle.
    */
    void on_removeButton_clicked();

    /*!
        Function that performs the selection action of the reason for the removal of cattle by death.
    */
    void on_radioButtonDeath_clicked();

    /*!
        Function that performs the action of confirming the cattle survey.
    */
    void on_okButton_clicked();

    /*!
        Function that performs the selection action of the reason for removing the cattle by sale.
    */
    void on_radioButtonSell_clicked();

private:
    Ui::CattleRemoveScreen *ui; /*!< This attribute contains the ui for the CattleRemove. */
    QWidget* backScreen; /*!< This attribute contains the reference of the back screen. */
    Farm* farm; /*!< This attribute contains the the Farm. */
};

#endif // CATTLEREMOVESCREEN_H
