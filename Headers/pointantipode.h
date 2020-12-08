#ifndef POINTANTIPODE_H
#define POINTANTIPODE_H

#include <QDialog>

namespace Ui {
class PointAntipode;
}
/**
 \brief Class for Point-Antipode task

 This class solves a task of finding the point-antipode
 with known coordinates of one point
 */
class PointAntipode : public QDialog
{
    Q_OBJECT

public:
    explicit PointAntipode(QWidget *parent = nullptr);///< Constructor
    ~PointAntipode();///< Destructor

private slots:
    void on_Calculate_Antipode_clicked();///< Button Calculate clicked


private:
    Ui::PointAntipode *ui;///< PointAntipode object
};

#endif // POINTANTIPODE_H
