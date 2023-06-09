#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QStandardPaths>
#include <QMessageBox>

//Refrence for myself on button settings 

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "\\toDoFile.txt");//create a file

    if(!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0,"error", file.errorString());
    }
    QTextStream filein(&file);
    while(!filein.atEnd()){
        QListWidgetItem* item = new QListWidgetItem(filein.readLine(), ui->listWidget); //read each line
        ui->listWidget->addItem(item); //place them into items
        item->setFlags(item->flags()|Qt::ItemIsEditable); //edit item without deleting
    }
    file.close(); //close the file mde
}

MainWindow::~MainWindow()
{
    delete ui;
    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "\\toDoFile.txt");//create a file

    if(!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0,"error", file.errorString());
    }
    QTextStream fileout(&file);
    for (int i = 0; i < ui->listWidget->count(); ++i){
        fileout<< ui->listWidget->item(i)->text()<<"\n";
    }
    file.close(); //close the file mde
}

void MainWindow::on_AddButton_clicked(){
    QListWidgetItem* item = new QListWidgetItem(ui->txtTask->text(), ui->listWidget);
    ui->listWidget->addItem(item);
    item->setFlags(item->flags()|Qt::ItemIsEditable); //edit item without deleting
    ui->txtTask->clear();
    ui->txtTask->setFocus();
}

void MainWindow::on_deleteButton_2_clicked(){
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}

void MainWindow::on_clearButton_3_clicked()
{
    ui->listWidget->clear();
}


