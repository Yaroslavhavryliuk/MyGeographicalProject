#ifndef LITHOSPHERE_H
#define LITHOSPHERE_H

#include <QDialog>
#include "relativeheight.h"
namespace Ui {
class Lithosphere;
}
/**
  \brief The Lithosphere class

  This is a class for tasks in Lithosphere section
  It has constructor, destructor, private slots and pointers
  for every task
 */
class Lithosphere : public QDialog
{
    Q_OBJECT

public:
    explicit Lithosphere(QWidget *parent = nullptr);///< Constructor
    ~Lithosphere();///< Destructor

private slots:


    void on_Relative_Height_clicked();///< Button Relative height clicked

private:
    Ui::Lithosphere *ui; ///< Lithosphere window object
    RelativeHeight *relh;///< RelativeHeight object

};

#endif // LITHOSPHERE_H
