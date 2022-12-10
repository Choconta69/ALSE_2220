#ifndef CONSOL_USUAR_H
#define CONSOL_USUAR_H

#include <QWidget>

namespace Ui {
class consol_usuar;
}

class consol_usuar : public QWidget
{
    Q_OBJECT

public:
    explicit consol_usuar(QWidget *parent = nullptr);
    ~consol_usuar();

private slots:
    void on_pb_ingresar_clicked();

private:
    Ui::consol_usuar *ui;
};

#endif // CONSOL_USUAR_H
