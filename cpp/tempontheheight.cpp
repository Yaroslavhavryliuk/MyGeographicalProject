#include "tempontheheight.h"
#include "ui_tempontheheight.h"
#include <QMessageBox>
/// Constructor
TempOnTheHeight::TempOnTheHeight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TempOnTheHeight)
{
    ui->setupUi(this);
}
/// Destructor
TempOnTheHeight::~TempOnTheHeight()
{
    delete ui;
}
/// Button Calculate clicked
void TempOnTheHeight::on_Calculate_temp_clicked()
{
    /// Input
    QString firstH = ui->lineEdit_height_1->text();
    for(int i=0; i<firstH.length(); i++)
    {
        if(((firstH[i]<48)||(firstH[i]>57))&&(firstH[i]!=46)&&(firstH[i]!=45))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
           break;
        }
    }
    QString secondH = ui->lineEdit_height_2->text();
    for(int i=0; i<secondH.length(); i++)
    {
        if(((secondH[i]<48)||(secondH[i]>57))&&(secondH[i]!=46)&&(secondH[i]!=45))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
           break;
        }
    }
    QString firstT = ui->lineEdit_temp_1->text();
    for(int i=0; i<firstT.length(); i++)
    {
        if(((firstT[i]<48)||(firstT[i]>57))&&(firstT[i]!=46)&&(firstT[i]!=45))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
           break;
        }
    }


    /// Counting
    double frstH = firstH.split(" ")[0].toDouble();
    double scndH = secondH.split(" ")[0].toDouble();
    double frstT = firstT.split(" ")[0].toDouble();
    double result;
    if(frstH<scndH)
    {
        result=frstT-(((abs(scndH-frstH))/100)*0.6);
    }
    else
    {
        result=frstT+(((abs(scndH-frstH))/100)*0.6);
    }


    /// Output
    QString res= QString::number(result);
    ui->lineEdit_result->setText(res);
}
