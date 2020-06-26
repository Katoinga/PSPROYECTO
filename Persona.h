#ifndef PERSONA_H
#define PERSONA_H
#pragma once

class Persona
{
private:
    std::string nombre;
    std::string apellido_paterno;
    std::string apellido_Materno;
    int edad;
    char dni[7];
    std::string nacionaliad;
    std::string direccion;
    char telef[9];
    char sexo;
public:
   void setNombre(std::string nombre);
   std::string getNombre();
   void setApellidoPaterno(std::string apellido_pat);
   std::string getApellidoPaterno();
   void setApellidoMaterno(std::string apellido_mat);
   std::string getApellidoMaterno();
   void setEdad(int edad);
   int getEdad();
   void setNacionalidad(std::string nacionalidad);
   std::string getNacionalidad();
   void setDireccion(std::string direccion);
   std::string getDireccion();
   void setTelefono(char telef[8]);
   char* getTelefono();
   void setSexo(char sexo);
   char getSexo();

};

#endif // PERSONA_H
