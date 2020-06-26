#ifndef VUELO_H
#define VUELO_H
#include <string>
#include "Aeropuerto.h"
#include "Avion.h"
#include "Aerolinea.h"
#include "Piloto.h"

using namespace std;

class Vuelo{
    private:
        Aeropuerto origen;
        Aeropuerto destino;
        Avion avion;
        Aerolinea aerolinea;
        Piloto piloto;
        long fechaInMilis;
        int estado; // 0 = Proximo, 1 = En Proceso, 2 = Finalizado
    public:
        Vuelo(Aeropuerto origen, Aeropuerto destino, Aerolinea aerolinea);
        void setOrigen(Aeropuerto);
        Aeropuerto getOrigen();
        void setDestino(Aeropuerto);
        Aeropuerto getDestino();
        void setAvion(string); //Busca el avion con el codigo mandado dentro de la aerolinea y lo establece
        Avion getAvion();
        void setAerolinea(Aerolinea); //Cambia de aerolinea resetea el avion y el piloto
        Aerolinea getAerolinea();
        void setPiloto(string); //Busca el piloto en la aerolinea y lo asigna al vuelo
        Piloto getPiloto();
        void setFechaInMilis(long milis);
        long getFechaInMilis();
        int capacidad(); //Devuelve la capacidad en base al avion
        void reservarAsiento(int f, int c); //Reserva un asiento en el avion
        void LiberarAsiento(int f, int c); //Libera un asiento
        void setEstado(int);
        int getEstado();
        void mostrarInfo();
};
#endif // VUELO_H
