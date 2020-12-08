/*#ifndef TIMETASKS_H
#define TIMETASKS_H

#include <QDialog>
#include <localtime.h>
namespace Ui {
class TimeTasks;
}

class TimeTasks : public QDialog
{
    Q_OBJECT

public:
    explicit TimeTasks(QWidget *parent = nullptr);
    ~TimeTasks();

private slots:
    void on_Local_Time_clicked();

private:
    Ui::TimeTasks *ui;
    LocalTime *localTime;
};

#endif // TIMETASKS_H
*/
