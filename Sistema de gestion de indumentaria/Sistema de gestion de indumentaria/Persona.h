#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "Fecha.h"

class Persona
{
    protected:
        int ID;
        char Apellidos[50];
        char Nombres[50];
        Fecha fechaNac;
        bool Estado;

    public:
        int getID(){return ID;}
        char* getApellidos(){return Apellidos;}
        char* getNombres(){return Nombres;}
        Fecha getfechaNac(){return fechaNac;}
        bool getEstado(){return Estado;}
        void setID(int);
        void setApellidos(char *a){strcpy(Apellidos,a);}
        void setNombres(char *a){strcpy(Nombres,a);}
        int setFecha();
        void setFecha(Fecha aux){fechaNac = aux;}
        void setEstado(bool nuevoEstado){Estado = nuevoEstado;}
        void cargar();
        void mostrar();
        bool leerDeDisco(int);
        bool grabarEnDisco();
};


#endif // PERSONA_H_INCLUDED
