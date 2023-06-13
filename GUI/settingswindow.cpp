#include "settingswindow.h"
#include "ui_settingswindow.h"

SettingsWindow::SettingsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void SettingsWindow::on_SortButton_clicked()
{

}


void SettingsWindow::on_DateButton_clicked()
{

}


void SettingsWindow::on_Button_3_clicked()
{

}


void SettingsWindow::on_MainMenu_clicked()
{

}

