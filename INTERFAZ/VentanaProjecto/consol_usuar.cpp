#include "consol_usuar.h"
#include "ui_consol_usuar.h"
#include "sqlite3.h"
#include "mainwindow.h"

consol_usuar::consol_usuar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consol_usuar)
{
    ui->setupUi(this);
}

consol_usuar::~consol_usuar()
{
    delete ui;
}



void consol_usuar::on_pb_ingresar_clicked()
{
    MainWindow w;
    w.show();

    close();
}
