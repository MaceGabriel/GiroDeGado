#ifndef FINANCIALMANAGEMENTSCREEN_H
#define FINANCIALMANAGEMENTSCREEN_H

#include <QDialog>
#include "homescreen.h"

//! Screen FinancialManagement
/**
* This screen represents the management of all features related to the financial.
*/
namespace Ui {
class FinancialManagementScreen;
}

class FinancialManagementScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the FinancialManagement.
    */
    explicit FinancialManagementScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the FinancialManagement.
    */
    ~FinancialManagementScreen();

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
        Function that redirects to the financial registration screen.
    */
    void on_registerButton_clicked();

    /*!
        Function that redirects to the financial query screen.
    */
    void on_queryButton_clicked();

    /*!
        Function that redirects to the financial remove screen.
    */
    void on_removeButton_clicked();

    /*!
        Function that redirects to the financial reports screen.
    */
    void on_reportButton_clicked();

private:
    Ui::FinancialManagementScreen *ui; /*!< This attribute contains the ui for the FinancialManagement. */
    QWidget* backScreen; /*!< This attribute contains the reference of the back screen. */
    Farm* farm; /*!< This attribute contains the the Farm. */
};

#endif // FINANCIALMANAGEMENTSCREEN_H
