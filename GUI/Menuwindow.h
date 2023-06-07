#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();

private slots:
    void on_View_Collection_Button_clicked();

    void on_View_Task_SchedulerButton_clicked();

    void on_Access_Settings_Button_clicked();

    void on_Exit_Button_clicked();

private:
    Ui::MenuWindow *ui;
};

#endif // MENUWINDOW_H
