#ifndef AEROLINEA_H
#define AEROLINEA_H
#include <string>
#include "Avion.h"
#include "Piloto.h"

using namespace std;

class Aerolinea{
    private:
        string nombre;
        Avion *aviones;
        Piloto *pilotos;
    public:
        Aerolinea(string nombre);
        Aerolinea(string nombre, Avion* aviones);
        void setNombre(string nombre);
        string getNombre();
        void agregarAvion(Avion);
        Avion* obtenerAviones();
        void agregarPiloto(Piloto p);
        Piloto* obtenerPilotos();
        void mostrarInfo();
};
#endif // AEROLINEA_H
