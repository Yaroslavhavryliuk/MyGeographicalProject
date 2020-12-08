#include "babineproblem.h"
#include "ui_babineproblem.h"
#include <QMessageBox>
/// Constructor
BabineProblem::BabineProblem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BabineProblem)
{
    ui->setupUi(this);
}
/// Destructor
BabineProblem::~BabineProblem()
{
    delete ui;
}
/// Button Calculate clicked
void BabineProblem::on_Calculate_Babine_clicked()
{
    ///Input
    QString temperature1=ui->lineEdit_Temp1->text();
    for(int i=0; i<temperature1.length(); i++)
    {
        if(((temperature1[i]<48)||(temperature1[i]>57))&&(temperature1[i]!=46)&&(temperature1[i]!=45))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
           break;
        }
    }
    QString pressure1 = ui->lineEdit_Press1->text();
    for(int i=0; i<pressure1.length(); i++)
    {
        if(((pressure1[i]<48)||(pressure1[i]>57))&&(pressure1[i]!=46))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer or double positive number");
           break;
        }
    }
    QString temperature2=ui->lineEdit_Temp2->text();
    for(int i=0; i<temperature2.length(); i++)
    {
        if(((temperature2[i]<48)||(temperature2[i]>57))&&(temperature2[i]!=46)&&(temperature2[i]!=45))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
           break;
        }
    }
    QString pressure2 = ui->lineEdit_Press2->text();
    for(int i=0; i<pressure2.length(); i++)
    {
        if(((pressure2[i]<48)||(pressure2[i]>57))&&(pressure2[i]!=46))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer or double positive number");
           break;
        }
    }


    /// Countings
    double temp1 = temperature1.split(" ")[0].toDouble();
    double pres1 = pressure1.split(" ")[0].toDouble();
    double temp2 = temperature2.split(" ")[0].toDouble();
    double pres2 = pressure2.split(" ")[0].toDouble();
    double result= 8000*((2*(pres2-pres1))/(pres1+pres2))*(1+(0.004*((temp1+temp2)/2)));


    /// Output
    QString res= QString::number(result);
    ui->lineEdit_Result->setText(res);

}
