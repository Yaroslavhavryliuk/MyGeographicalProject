#ifndef FALLSLOPERIVER_H
#define FALLSLOPERIVER_H

#include <QDialog>

namespace Ui {
class FallSlopeRiver;
}
/**
 \brief Class for Fall and Slope of the river task

 This class solves a task of finding the fall and slope
 of the river with known heights of leakage and mouth of the river
 */
class FallSlopeRiver : public QDialog
{
    Q_OBJECT

public:
    explicit FallSlopeRiver(QWidget *parent = nullptr);///< Constructor
    ~FallSlopeRiver();///< Destructor

private slots:
    void on_Calculate_Fall_Slope_clicked();///< Button Calculate clicked


private:
    Ui::FallSlopeRiver *ui;///< FallSlopeRiver object
};

#endif // FALLSLOPERIVER_H
