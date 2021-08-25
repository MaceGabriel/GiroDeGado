/*!
 \file reportscreen.h
 \brief This file contains the screen for the requisition and visualization of reports in the GiroDeGado software.
*/

#ifndef REPORTSCREEN_H
#define REPORTSCREEN_H

#include <QDialog>
#include "../../api/includes/farm.h"

/**
 * \brief
 * This screen represents the request for a report.
*/
namespace Ui {
class ReportScreen;
}
class ReportScreen : public QDialog
{
    Q_OBJECT

public:
    /*!
        This is the default constructor for the Screen ReportScreen.
    */
    explicit ReportScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);

    /*!
        This is the default destructor for the Screen ReportScreen.
    */
    ~ReportScreen();

    /*!
        Returns the Farm.
    */
    Farm* getFarm();

private slots:
    /*!
        Function that redirects to the cattle management screen.
    */
    void on_okButton_clicked();

    /*!
        Function that redirects to the cattle management screen.
    */
    void on_backButton_clicked();

private:
    Ui::ReportScreen *ui; /*!< This attribute contains the ui for the ReportScreen. */
    QWidget* backScreen_; /*!< This attribute contains the reference of the back screen. */
    Farm* farm_; /*!< This attribute contains the the Farm. */
};

#endif // REPORTSCREEN_H
