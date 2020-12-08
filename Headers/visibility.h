#ifndef VISIBILITY_H
#define VISIBILITY_H

#include <QDialog>

namespace Ui {
class Visibility;
}
/**
 \brief Class for Visibility horizon far problem task

 This class solves a task of horizon far problem
 with known height of a point-place of seeing
 */
class Visibility : public QDialog
{
    Q_OBJECT

public:
    explicit Visibility(QWidget *parent = nullptr);///< Constructor
    ~Visibility();///< Destructor

private slots:
    void on_Calculate_Visibility_clicked();///< Button Calculate clicked


private:
    Ui::Visibility *ui;///< Visibility object
};

#endif // VISIBILITY_H
