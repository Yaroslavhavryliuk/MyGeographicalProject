#ifndef RELATIVEHEIGHT_H
#define RELATIVEHEIGHT_H

#include <QDialog>

namespace Ui {
class RelativeHeight;
}
/**
 \brief Class for Relative Height task

 This class solves a task of relative height between two points
 */
class RelativeHeight : public QDialog
{
    Q_OBJECT

public:
    explicit RelativeHeight(QWidget *parent = nullptr);///< Constructor
    ~RelativeHeight();///< Destructor

private slots:
    void on_Calculate_Relative_height_clicked();///< Button Calculate clicked

private:
    Ui::RelativeHeight *ui;///< RelativeHeight object
};

#endif // RELATIVEHEIGHT_H
