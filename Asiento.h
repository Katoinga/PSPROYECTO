#ifndef ASIENTO_H
#define ASIENTO_H
#include <string>

using namespace std;

class Asiento
{
private:
    char fila;
    int columna;
    int estado; //0 = disponible, 1 = ocupado, 2 = malogrado
public:
    Asiento(char fila, int columna);
    void setFila(char fila);
    char getFila();
    void setColumna(int columna);
    int getColumna();
    void setEstado(int estado);
    int getEstado();
    int getOcupado();
    void reservar();
    void comprar();
    void desbloquear();
};
#endif // ASIENTO_H
