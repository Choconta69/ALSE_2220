#include "mainwindow.h"
#include "consol_usuar.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    bool esc = false;

    MainWindow c;
    c.show();

    return a.exec();
}
