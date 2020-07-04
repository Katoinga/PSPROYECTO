#ifndef REGPASAJERO_H
#define REGPASAJERO_H

#include <QDialog>

namespace Ui {
class RegPasajero;
}

class RegPasajero : public QDialog
{
    Q_OBJECT

public:
    explicit RegPasajero(QWidget *parent = nullptr);
    ~RegPasajero();

private:
    Ui::RegPasajero *ui;
};

#endif // REGPASAJERO_H
