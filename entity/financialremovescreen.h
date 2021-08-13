#ifndef FINANCIALREMOVESCREEN_H
#define FINANCIALREMOVESCREEN_H

#include <QDialog>
#include "financialmanagementscreen.h"

//! Screen FinancialRemove
/**
* This screen represents financial removals.
*/
namespace Ui {
class FinancialRemoveScreen;
}

class FinancialRemoveScreen : public QDialog
{
    Q_OBJECT

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
    Ui::FinancialRemoveScreen *ui; /*!< This attribute contains the ui for the FinancialRemove. */
    QWidget* backScreen; /*!< This attribute contains the reference of the back screen. */
    Farm* farm; /*!< This attribute contains the the Farm. */
};

#endif // FINANCIALREMOVESCREEN_H
