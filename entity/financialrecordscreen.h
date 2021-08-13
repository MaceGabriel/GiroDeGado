#ifndef FINANCIALRECORDSCREEN_H
#define FINANCIALRECORDSCREEN_H

#include <QDialog>

#include "financialmanagementscreen.h"

//! Screen FinancialRecords
/**
* This screen represents the transaction register.
*/
namespace Ui {
class FinancialRecordScreen;
}

class FinancialRecordScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen FinancialRecords.
    */
    explicit FinancialRecordScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen FinancialRecords.
    */
    ~FinancialRecordScreen();

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
        Function that performs the action of registering a financial record.
    */
    void on_registerButton_clicked();

private:
    Ui::FinancialRecordScreen *ui; /*!< This attribute contains the ui for the FinancialRecords. */
    QWidget* backScreen; /*!< This attribute contains the reference of the back screen. */
    Farm* farm; /*!< This attribute contains the the Farm. */
};

#endif // FINANCIALRECORDSCREEN_H
