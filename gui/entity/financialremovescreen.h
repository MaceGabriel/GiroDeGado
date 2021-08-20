/*!
 \file financialremovescreen.h
 \brief This file contains the screen for the removal of a registered transaction for the GiroDeGado software.
*/

#ifndef FINANCIALREMOVESCREEN_H
#define FINANCIALREMOVESCREEN_H

#include <QDialog>
#include "financialmanagementscreen.h"

/** 
 * \brief
 * This screen represents transaction removals.
*/
namespace Ui {
class FinancialRemoveScreen;
}

class FinancialRemoveScreen : public QDialog
{
    Q_OBJECT
    friend class TestFinancialRemoveScreenGUI;

public:
    /*!
        This is the default constructor for the FinancialRemove.
    */
    explicit FinancialRemoveScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the FinancialRemove.
    */
    ~FinancialRemoveScreen();

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
        Function that performs the action of removing a record.
    */
    void on_removeButton_clicked();

    /*!
        Function that performs the action of confirming the financial survey.
    */
    void on_okButton_clicked();

private:
    Ui::FinancialRemoveScreen *ui_; /*!< This attribute contains the ui for the FinancialRemove. */
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_; /*!< This attribute contains the the Farm. */
};

#endif // FINANCIALREMOVESCREEN_H
