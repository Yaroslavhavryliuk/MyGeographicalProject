#include "visibility.h"
#include "ui_visibility.h"
#include <QMessageBox>
#include "cmath"
/// Constructor
Visibility::Visibility(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Visibility)
{
    ui->setupUi(this);
}
/// Destructor
Visibility::~Visibility()
{
    delete ui;
}

/// Button Calculate clicked
void Visibility::on_Calculate_Visibility_clicked()
{
    /// Input
    QString height = ui->lineEdit_height->text();
    for(int i=0; i<height.length(); i++)
    {
        if(((height[i]<48)||(height[i]>57))&&(height[i]!=46)&&(height[i]!=45))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
           break;
        }
    }


    /// Countings
    double hgh = height.split(" ")[0].toDouble();
    double result;
    if(hgh<=0)
    {
        result=0;
    }
    else
    {
        result=3.83*(std::sqrt(hgh));
    }


    /// Output
    QString res= QString::number(result);
    ui->lineEdit_res->setText(res);
}
