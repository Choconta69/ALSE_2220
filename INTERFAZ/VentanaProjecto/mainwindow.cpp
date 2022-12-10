#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "consol_usuar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    consol_usuar c;
    c.show();
    c.exec();
    close();
}
