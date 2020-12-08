#ifndef MAPS_H
#define MAPS_H

#include <QDialog>
#include "scale.h"
namespace Ui {
class Maps;
}
/**
  \brief The Maps class

  This is a class for tasks in Maps section
  It has constructor, destructor, private slots and pointers
  for every task
 */
class Maps : public QDialog
{
    Q_OBJECT

public:
    explicit Maps(QWidget *parent = nullptr);///< Constructor
    ~Maps();///< Destructor

private slots:
    void on_Scale_clicked();///< Button Scale clicked

private:
    Ui::Maps *ui;///< Maps object
    Scale *scale;///< Scale object
};

#endif // MAPS_H
