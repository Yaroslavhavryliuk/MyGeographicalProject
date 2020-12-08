#include "relativeheight.h"
#include "ui_relativeheight.h"
#include <QMessageBox>
/// Constructor
RelativeHeight::RelativeHeight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RelativeHeight)
{
    ui->setupUi(this);
}
/// Destructor
RelativeHeight::~RelativeHeight()
{
    delete ui;
}
/// Button Calculate clicked
void RelativeHeight::on_Calculate_Relative_height_clicked()
{
    /// Input
  QString first = ui->lineEdit_height_1->text();
  for(int i=0; i<first.length(); i++)
  {
      if(((first[i]<48)||(first[i]>57))&&(first[i]!=46)&&(first[i]!=45))
      {
         QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
         break;
      }
  }
  QString second = ui->lineEdit_height_2->text();
  for(int i=0; i<second.length(); i++)
  {
      if(((second[i]<48)||(second[i]>57))&&(second[i]!=46)&&(second[i]!=45))
      {
         QMessageBox::warning(this, "Incorrect input", "Put an integer or double number");
         break;
      }
  }


  ///Countings
  double frst = first.split(" ")[0].toDouble();
  double scnd = second.split(" ")[0].toDouble();
  double result = abs(frst-scnd);

  ///Result
  QString res= QString::number(result);
  ui->lineEdit_result->setText(res);
}
