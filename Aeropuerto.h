#ifndef AEROPUERTO_H
#define AEROPUERTO_H
#include <string>

//declaracion de la clase Aeropuerto
class Aeropuerto{
    private:
        String nombre;					  //nombre del aeropuerto
        Aerolinea *aerolineas;		      //aerolineas del aeropuerto
        PuertaEmbarque *puerta_embarque;  //puertas de embarque del aeropuerto
        Ventanilla *ventanillas;		  //ventanillas del aeropuerto
        String pais;					  //pais del aeropuerto
        String ciudad;					  //ciudad del aeropuerto
    public:
        void agregarNuevo();              //agregar un nuevo aeropuerto
        Aeropuerto obtener();             //obtener el aeropuerto
};

#endif // AEROPUERTO_H
