#ifndef AVION_H
#define AVION_H
#pragma once
#include <string.h>
#include <string>
using namespace std;

class Avion {
        string modelo;
        string codigo;
        int num_asientos;
        Pasajero* pasajeros;
        char* clase;
public:
        Avion();
        void asignarVuelo();
        Avion obtener();
        void cancelarVuelo();
        void verDatos();
};

#endif // AVION_H
