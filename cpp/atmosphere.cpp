#include "atmosphere.h"
#include "ui_atmosphere.h"
/// Constructor
Atmosphere::Atmosphere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Atmosphere)
{
    ui->setupUi(this);
}
/// Destructor
Atmosphere::~Atmosphere()
{
    delete ui;
}
/// Button Temperature on the hight clicked
void Atmosphere::on_Temperature_on_the_hight_clicked()
{
    tempOnTheHeight = new TempOnTheHeight(this);
    tempOnTheHeight->show();
}
/// Button Babine Problem clicked
void Atmosphere::on_BabineProblem_clicked()
{
    babine = new BabineProblem(this);
    babine->show();
}
