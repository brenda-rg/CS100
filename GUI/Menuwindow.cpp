#include "Menuwindow.h"
#include "ui_Menuwindow.h"
#include <QPixmap>
 #include <QPalette>
MenuWindow::MenuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuWindow)

{
    //QWidget *frame = new QWidget(this);
    //frame->setGeometry(x,y,width,height);

//   ui->setupUi(this);
//   QpixmapBg.load(":/res/background.jpg");
//    QPixmap bkgnd("C:/Users/abiii/Downloads/Kooala/Kooala_Project.png.png");
//    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
//    QPalette palette;
//    palette.setBrush(QPalette::Background,bkgnd);
//   this->setPalette(palette);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_View_Collection_Button_clicked()
{

}


void MenuWindow::on_View_Task_SchedulerButton_clicked()
{

}


void MenuWindow::on_Access_Settings_Button_clicked()
{

}


void MenuWindow::on_Exit_Button_clicked()
{

}

