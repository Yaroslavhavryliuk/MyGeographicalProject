#ifndef BABINEPROBLEM_H
#define BABINEPROBLEM_H

#include <QDialog>

namespace Ui {
class BabineProblem;
}
/**
 \brief Class for Babine problem task

 This class solves a task of Babine problem
 with known temperatures and pressures of two points
 */
class BabineProblem : public QDialog
{
    Q_OBJECT

public:
    explicit BabineProblem(QWidget *parent = nullptr);///< Constructor
    ~BabineProblem();///< Destructor

private slots:
    void on_Calculate_Babine_clicked();///< Button Calculate clicked

private:
    Ui::BabineProblem *ui;///< BabineProblem object
};

#endif // BABINEPROBLEM_H
