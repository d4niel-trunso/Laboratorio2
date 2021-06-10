#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "Fecha.h"

class Persona:public Fecha
{
    protected:
        char DNI[12];
        char Apellidos[50];
        char Nombres[50];
        //Fecha fechaNac;
        bool Estado;

    public:
        char* getDNI(){return DNI;}
        char* getApellidos(){return Apellidos;}
        char* getNombres(){return Nombres;}
        //Fecha getfechaNac(){return fechaNac;}
        bool getEstado(){return Estado;}
        void setDNI(char *dni){strcpy(DNI, dni);}
        void setApellidos(char *a){strcpy(Apellidos,a);}
        void setNombres(char *n){strcpy(Nombres,n);}
        //int setFecha();
        //void setFecha(Fecha aux){fechaNac = aux;}
        void setEstado(bool nuevoEstado){Estado = nuevoEstado;}
        void cargar();
        void mostrar();
        bool leerDeDisco(int);
        bool grabarEnDisco();
};


#endif // PERSONA_H_INCLUDED
