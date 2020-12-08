#include "lithosphere.h"
#include "ui_lithosphere.h"
/// Constructor
Lithosphere::Lithosphere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lithosphere)
{
    ui->setupUi(this);
}
/// Destructor
Lithosphere::~Lithosphere()
{
    delete ui;
}

/// Button Relative height clicked
void Lithosphere::on_Relative_Height_clicked()
{
    relh = new RelativeHeight(this);
    relh->show();
}
