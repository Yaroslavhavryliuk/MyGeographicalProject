#include "scale.h"
#include "ui_scale.h"
#include <QMessageBox>
/// Constructor
Scale::Scale(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Scale)
{
    ui->setupUi(this);
}
/// Destructor
Scale::~Scale()
{
    delete ui;
}
/// Button Calculate clicked
void Scale::on_Calculate_Real_Distance_clicked()
{
    /// Input
    QString mapDist = ui->lineEdit_MD->text();
    for(int i=0; i<mapDist.length(); i++)
    {
        if(((mapDist[i]<48)||(mapDist[i]>57))&&(mapDist[i]!=46))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer or double positive number");
           break;
        }
    }
    QString scale=ui->lineEdit_Scale->text();
    for(int i=0; i<scale.length(); i++)
    {
        if((scale[i]<48)||(scale[i]>57))
        {
           QMessageBox::warning(this, "Incorrect input", "Put an integer positive number");
           break;
        }
    }


    /// Countings
    double mapD = mapDist.split(" ")[0].toDouble();
    int scl= scale.split(" ")[0].toInt();
    double result = (scl/100000)*mapD;

    /// Output
    QString res= QString::number(result);
    ui->lineEdit_RD->setText(res);

}
