#ifndef VENTANILLA_H
#define VENTANILLA_H
#include <string>
#include "Aerolinea.h"
#include "Vendedor.h"
#include "Avion.h"

using namespace std;

class Ventanilla
{
private:
    int numero;
    Aerolinea aerolinea;
    Vendedor vendedor;
    Avion *avion;
    int contador;
public:
    Ventanilla(int numero, Aerolinea aerolinea,Vendedor vendedor, Avion *avion);
    void agregarNuevo();
    Ventanilla obtener();
    Vendedor getVendedor();
};
#endif // VENTANILLA_H
