#ifndef HYDROLOGY_H
#define HYDROLOGY_H

#include <QDialog>
#include "fallsloperiver.h"
namespace Ui {
class Hydrology;
}
/**
  \brief The Hydrology class

  This is a class for tasks in Hydrology section
  It has constructor, destructor, private slots and pointers
  for every task
 */
class Hydrology : public QDialog
{
    Q_OBJECT

public:
    explicit Hydrology(QWidget *parent = nullptr);///< Constructor
    ~Hydrology();///< Destructor

private slots:


    void on_Fall_Slope_river_clicked();///< Button Fall and slope of the river clicked

private:
    Ui::Hydrology *ui;///< Hydrology object
    FallSlopeRiver *fallSlopeRiver;/// FallSlopeRiver object
};

#endif // HYDROLOGY_H
