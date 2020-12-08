#ifndef SCALE_H
#define SCALE_H

#include <QDialog>

namespace Ui {
class Scale;
}
/**
 \brief Class for Scale task

 This class solves a task of finding the real distance
 with known numerical scale and distance on the map
 */
class Scale : public QDialog
{
    Q_OBJECT

public:
    explicit Scale(QWidget *parent = nullptr);///< Constructor
    ~Scale();///< Destructor

private slots:
    void on_Calculate_Real_Distance_clicked();///< Button Calculate clicked


private:
    Ui::Scale *ui;/// Scale object
};

#endif // SCALE_H
