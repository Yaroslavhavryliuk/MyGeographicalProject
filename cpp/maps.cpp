#include "maps.h"
#include "ui_maps.h"
/// Constructor
Maps::Maps(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Maps)
{
    ui->setupUi(this);
}
/// Destructor
Maps::~Maps()
{
    delete ui;
}
/// Button Scale clicked
void Maps::on_Scale_clicked()
{
    scale = new Scale(this);
    scale->show();
}
