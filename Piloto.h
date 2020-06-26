#ifndef PILOTO_H
#define PILOTO_H
#pragma once
#include <string.h>
#include "Persona.h"
#include <string>
using namespace std;

class Piloto: public Persona {
        string codigo;
public:
        Piloto();
        void setCodigo(string value);
        string getCodigo();
        void asignarVuelo();
        void cancelarVuelo();
        void modificar();
        Piloto buscar(int indice);
};

#endif // PILOTO_H
