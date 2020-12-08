#ifndef TEMPONTHEHEIGHT_H
#define TEMPONTHEHEIGHT_H

#include <QDialog>

namespace Ui {
class TempOnTheHeight;
}
/**
 \brief Class for Temperature on the height task

 This class solves a task of finding the temperature on the height
 with known temperature on the other height
 */
class TempOnTheHeight : public QDialog
{
    Q_OBJECT

public:
    explicit TempOnTheHeight(QWidget *parent = nullptr);///< Constructor
    ~TempOnTheHeight();///< Destructor

private slots:
    void on_Calculate_temp_clicked();///< Button Calculate clicked

private:
    Ui::TempOnTheHeight *ui;///< TempOnTheHeight object
};

#endif // TEMPONTHEHEIGHT_H
