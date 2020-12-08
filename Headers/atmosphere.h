#ifndef ATMOSPHERE_H
#define ATMOSPHERE_H

#include <QDialog>
#include "tempontheheight.h"
#include "babineproblem.h"
namespace Ui {
class Atmosphere;
}
/**
  \brief The Atmosphere class

  This is a class for tasks in Atmosphere section
  It has constructor, destructor, private slots and pointers
  for every task
 */
class Atmosphere : public QDialog
{
    Q_OBJECT

public:
    explicit Atmosphere(QWidget *parent = nullptr);///< Constructor
    ~Atmosphere();///< Destructor

private slots:
    void on_Temperature_on_the_hight_clicked();///< Button Temperature on the hight clicked



    void on_BabineProblem_clicked();///< Button Babine Problem clicked

private:
    Ui::Atmosphere *ui;///< Atmosphere object
    TempOnTheHeight *tempOnTheHeight;///< TempOnTheHeight object
    BabineProblem *babine;///< BabineProblem object
};

#endif // ATMOSPHERE_H
