#ifndef PUERTAEMBARQUE_H
#define PUERTAEMBARQUE_H

#pragma once
class PuertaEmbarque
{
private:
    std::string numero;
    bool ocupado;
public:
    void setNumero(std::string numero);
    string getNumero();
    void setOcupado(bool ocupado);
    bool getOcupado();

};


#endif // PUERTAEMBARQUE_H
