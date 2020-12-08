#include "fallsloperiver.h"
#include "ui_fallsloperiver.h"
#include <QMessageBox>
/// Constructor
FallSlopeRiver::FallSlopeRiver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FallSlopeRiver)
{
    ui->setupUi(this);
}
/// Destructor
FallSlopeRiver::~FallSlopeRiver()
{
    delete ui;
}
/// Button Calculate clicked
void FallSlopeRiver::on_Calculate_Fall_Slope_clicked()
{
    /// Input
  QString leakageH=ui->lineEdit_Leakage->text();
  for(int i=0; i<leakageH.length(); i++)
  {
      if(((leakageH[i]<48)||(leakageH[i]>57))&&(leakageH[i]!=46)&&(leakageH[i]!=45))
      {
         QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
         break;
      }
  }
  QString mouthH=ui->lineEdit_Mouth->text();
  for(int i=0; i<mouthH.length(); i++)
  {
      if(((mouthH[i]<48)||(mouthH[i]>57))&&(mouthH[i]!=46)&&(mouthH[i]!=45))
      {
         QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
         break;
      }
  }
  QString lengthR=ui->lineEdit_Riverlength->text();
  for(int i=0; i<lengthR.length(); i++)
  {
      if(((lengthR[i]<48)||(lengthR[i]>57))&&(lengthR[i]!=46)&&(lengthR[i]!=45))
      {
         QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
         break;
      }
  }


  /// Countings
  double leakage = leakageH.split(" ")[0].toDouble();
  double mouth = mouthH.split(" ")[0].toDouble();
  double length = lengthR.split(" ")[0].toDouble();
  double fall;
  fall=leakage-mouth;
  double slope;
  slope=fall/length;


  /// Output
  QString fallres=QString::number(fall);
  QString sloperes=QString::number(slope);
  ui->lineEdit_Fall->setText(fallres);
  ui->lineEdit_Slope->setText(sloperes);
}
