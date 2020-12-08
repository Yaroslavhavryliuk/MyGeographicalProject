#ifndef FORMSANDSIZESOFEARTH_H
#define FORMSANDSIZESOFEARTH_H

#include <QDialog>
#include "pointantipode.h"
#include "visibility.h"
namespace Ui {
class FormsAndSizesOfEarth;
}
/**
  \brief The FormsAndSizesOfEarth class

  This is a class for tasks in FormsAndSizesOfEarth section
  It has constructor, destructor, private slots and pointers
  for every task
 */
class FormsAndSizesOfEarth : public QDialog
{
    Q_OBJECT

public:
    explicit FormsAndSizesOfEarth(QWidget *parent = nullptr);///< Constructor
    ~FormsAndSizesOfEarth();///< Destructor

private slots:
    void on_Point_Antipode_clicked();///< Button Point-Antipode clicked

    void on_VisibilityHorizonFar_clicked();///< Button VisibilityHorizonFar clicked

private:
    Ui::FormsAndSizesOfEarth *ui;///< FormsAndSizesOfEarth object
    PointAntipode *antipode;///< PointAntipode object
    Visibility *visibility;///< Visibility object
};

#endif // FORMSANDSIZESOFEARTH_H
