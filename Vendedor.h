#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <string>

//declaracion de la clase Vendedor derivada de la clase Persona
class Vendedor: public Persona{
        private:
                String codigo;					//codigo del vendedor
        public:
                void setCodigo(String codigo);  //cambiar codigo del vendedor
                String getCodigo();             //obtener el codigo del vendedor
}

#endif // VENDEDOR_H
