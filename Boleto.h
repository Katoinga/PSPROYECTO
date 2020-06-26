#ifndef BOLETO_H
#define BOLETO_H
#include <string>
#include "Vuelo.h"
#include "Pasajero.h"
#include "PuertaEmbarque.h"

using namespace std;

class Boleto
{
private:
    Vuelo vuelo;
    Pasajero pasajero;
    int **asiento;
    PuertaEmbarque puertaEmbarque;
public:
    Boleto(Vuelo vuelo, Pasajero pasajero, int **asiento, PuertaEmbarque puertaEmbarque);
    void modificar();
    void nuevo();
    void asignarPasajero();
    void asignarVuelo();
    void asignarPuertaEmbarque();
};
#endif // BOLETO_H
