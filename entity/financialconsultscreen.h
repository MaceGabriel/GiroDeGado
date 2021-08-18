#ifndef FINANCIALCONSULTSCREEN_H
#define FINANCIALCONSULTSCREEN_H

#include <QDialog>
#include "financialmanagementscreen.h"

//! Screen FinancialConsult
/**
* This screen that represents the financial consult.
*/
namespace Ui {
class FinancialConsultScreen;
}

class FinancialConsultScreen : public QDialog
{
    Q_OBJECT

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
    Ui::FinancialConsultScreen *ui; /*!< This attribute contains the ui for the FinancialConsult. */
    QWidget* backScreen; /*!< This attribute contains the reference of the back screen. */
    Farm* farm; /*!< This attribute contains the the Farm. */
};

#endif // FINANCIALCONSULTSCREEN_H
