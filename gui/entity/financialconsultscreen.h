/*!
 \file financialconsultscreen.h
 \brief This file contains the screen for the consult of transactions for the GiroDeGado software.
*/

#ifndef FINANCIALCONSULTSCREEN_H
#define FINANCIALCONSULTSCREEN_H

#include <QDialog>
#include "financialmanagementscreen.h"

/**
 * \brief
 * This screen that represents cattle consults.
*/
namespace Ui {
class FinancialConsultScreen;
}

class FinancialConsultScreen : public QDialog
{
    Q_OBJECT
    friend class TestFinancialConsultScreenGUI;

public:
    /*!
        This is the default constructor for the Screen FinancialConsult.
    */
    explicit FinancialConsultScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen FinancialConsult.
    */
    ~FinancialConsultScreen();

    /*!
        Returns the Farm.
    */
    Farm* getFarm();

private slots:
    /*!
        Function that performs the action of confirming the financial survey.
    */
    void on_okButton_clicked();

    /*!
        Function that performs the action of going back to the previous screen.
    */
    void on_backButton_clicked();

private:
    Ui::FinancialConsultScreen *ui_; /*!< This attribute contains the ui for the FinancialConsult. */
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_; /*!< This attribute contains the the Farm. */
};

#endif // FINANCIALCONSULTSCREEN_H
