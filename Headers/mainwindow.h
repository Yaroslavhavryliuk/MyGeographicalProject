#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "lithosphere.h"
#include "atmosphere.h"
#include "hydrology.h"
#include "formsandsizesofearth.h"
//#include "timetasks.h"
#include "maps.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
  \brief The MainWindow class

  This class is the main menu of the program
  It has constructor, destructor, private slots and pointers
  for every section of geography
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);///< Constructor
    ~MainWindow();///< Destructor

private slots:
    void on_Lithosphere_clicked();///< Button Lithosphere clicked

    void on_Atmosphere_clicked();///< Button Atmosphere clicked


    void on_Hydrology_clicked();///< Button Hydrology clicked


    void on_Forms_Sizes_Earth_clicked();///< Button Forms and Sizes of Earth clicked

    //void on_TimeTasks_clicked();

    void on_Maps_clicked();///< Button Maps clicked

private:
    Ui::MainWindow *ui;///< Main window object
    Lithosphere *lithosphere;///< Lithosphere object
    Atmosphere *atmosphere;///< Atmosphere object
    Hydrology *hydrology;///< Hydrology object
    FormsAndSizesOfEarth *formSize;///< FormsAndSizesOfEarth object
    //TimeTasks *timeTasks;
    Maps *maps;///< Maps object
};
#endif // MAINWINDOW_H
