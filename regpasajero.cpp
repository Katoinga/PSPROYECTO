#include "regpasajero.h"
#include "ui_regpasajero.h"

RegPasajero::RegPasajero(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegPasajero)
{
    ui->setupUi(this);
}

RegPasajero::~RegPasajero()
{
    delete ui;
}
