#include "pointantipode.h"
#include "ui_pointantipode.h"
#include <QMessageBox>
/// Constructor
PointAntipode::PointAntipode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PointAntipode)
{
    ui->setupUi(this);
}
/// Destructor
PointAntipode::~PointAntipode()
{
    delete ui;
}
/// Button Calculate clicked
void PointAntipode::on_Calculate_Antipode_clicked()
{
    /// Input
    QString latitude=ui->comboBox_Lat->currentText();
    QString latitudeD=ui->lineEdit_Lat_Deg->text();
    for(int i=0; i<latitudeD.length(); i++)
    {
        if((latitudeD[i]<48)||(latitudeD[i]>57))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer positive number");
           break;
        }
    }
    QString latitudeM=ui->lineEdit_Lat_Min->text();
    for(int i=0; i<latitudeM.length(); i++)
    {
        if((latitudeM[i]<48)||(latitudeM[i]>57))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer positive number");
           break;
        }
    }
    QString longitude=ui->comboBox_Long->currentText();
    QString longitudeD=ui->lineEdit_Long_Deg->text();
    for(int i=0; i<longitudeD.length(); i++)
    {
        if((longitudeD[i]<48)||(longitudeD[i]>57))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer positive number");
           break;
        }
    }
    QString longitudeM=ui->lineEdit_Long_Min->text();
    for(int i=0; i<longitudeM.length(); i++)
    {
        if((longitudeM[i]<48)||(longitudeM[i]>57))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer positive number");
           break;
        }
    }
    if(latitude=="North")
    {
    ui->lineEdit_Res_Lat->setText("South");
    }
    if(latitude=="South")
    {
    ui->lineEdit_Res_Lat->setText("North");
    }
    if(longitude=="East")
    {
    ui->lineEdit_Res_Long->setText("West");
    }
    if(latitude=="West")
    {
    ui->lineEdit_Res_Long->setText("East");
    }
    int latD = latitudeD.split(" ")[0].toInt();
    if((latD<0)||(latD>90))
    {
        QMessageBox::warning(this, "Incorrect input", "Latitude degree must be from 0 to 90");
    }
    int latM = latitudeM.split(" ")[0].toInt();
    if((latM<0)||(latM>59))
    {
        QMessageBox::warning(this, "Incorrect input", "Latitude minute must be from 0 to 59");
    }
    int longD = longitudeD.split(" ")[0].toInt();
    if((longD<0)||(longD>180))
    {
        QMessageBox::warning(this, "Incorrect input", "Longitude degree must be from 0 to 180");
    }
    int longM = longitudeM.split(" ")[0].toInt();
    if((longM<0)||(longM>59))
    {
        QMessageBox::warning(this, "Incorrect input", "Longitude minute must be from 0 to 59");
    }


    /// Countings and output
    ui->lineEdit_Lat_Deg_Res->setText(latitudeD);
    ui->lineEdit_Lat_Min_Res->setText(latitudeM);
    int longDRes=180-longD;
    QString resD= QString::number(longDRes);
    ui->lineEdit_Long_Deg_Res->setText(resD);
    int longMRes=60-longM;
    if(longMRes==60)
    {
        longMRes=0;
    }
    QString resM= QString::number(longMRes);
    ui->lineEdit_Long_Min_Res->setText(resM);

}
