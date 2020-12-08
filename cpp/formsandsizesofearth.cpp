#include "formsandsizesofearth.h"
#include "ui_formsandsizesofearth.h"
/// Constructor
FormsAndSizesOfEarth::FormsAndSizesOfEarth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormsAndSizesOfEarth)
{
    ui->setupUi(this);
}
/// Destructor
FormsAndSizesOfEarth::~FormsAndSizesOfEarth()
{
    delete ui;
}
/// Button Point-Antipode clicked
void FormsAndSizesOfEarth::on_Point_Antipode_clicked()
{
    antipode = new PointAntipode(this);
    antipode->show();
}
/// Button VisibilityHorizonFar clicked
void FormsAndSizesOfEarth::on_VisibilityHorizonFar_clicked()
{
    visibility = new Visibility(this);
    visibility->show();
}
