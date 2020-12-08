#include "mainwindow.h"
#include "ui_mainwindow.h"
/// Constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
/// Destructor
MainWindow::~MainWindow()
{
    delete ui;
}


/// Button Lithosphere clicked
void MainWindow::on_Lithosphere_clicked()
{
    lithosphere = new Lithosphere(this);
    lithosphere->show();
}
/// Button Atmosphere clicked
void MainWindow::on_Atmosphere_clicked()
{
    atmosphere = new Atmosphere(this);
    atmosphere->show();
}
///< Button Hydrology clicked
void MainWindow::on_Hydrology_clicked()
{
    hydrology = new Hydrology(this);
    hydrology->show();
}
///< Button Forms and Sizes of Earth clicked
void MainWindow::on_Forms_Sizes_Earth_clicked()
{
    formSize = new FormsAndSizesOfEarth(this);
    formSize->show();
}

/*void MainWindow::on_TimeTasks_clicked()
{
    timeTasks = new TimeTasks(this);
    timeTasks->show();
}*/
///< Button Maps clicked
void MainWindow::on_Maps_clicked()
{
    maps = new Maps(this);
    maps->show();
}
