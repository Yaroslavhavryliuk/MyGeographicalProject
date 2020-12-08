#include "hydrology.h"
#include "ui_hydrology.h"
/// Constructor
Hydrology::Hydrology(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hydrology)
{
    ui->setupUi(this);
}
/// Destructor
Hydrology::~Hydrology()
{
    delete ui;
}
/// Button Fall and slope of the river clicked
void Hydrology::on_Fall_Slope_river_clicked()
{
    fallSlopeRiver = new FallSlopeRiver(this);
    fallSlopeRiver->show();
}
