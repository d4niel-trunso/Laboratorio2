#ifndef CLIENTE_H_INCLUDED

#define CLIENTE_H_INCLUDED
#include <cstring>
#include "rlutil.h"
#include "Persona.h"
using namespace rlutil;

class Cliente:public Persona

{

    public:
        int getID(){return ID;}
        char* getDomicilio(){return Domicilio;}
        char* getTelefono(){return Telefono;}
        char* getMail(){return Mail;}
        void setID(int);
        void setDomicilio(char *a){strcpy(Domicilio,a);}
        void setTelefono(char *a){strcpy(Telefono,a);}
        void setMail(char *a){strcpy(Mail,a);}
        void cargar();
        void mostrar();
        bool leerDeDisco(int);
        int guardarClienteEnDisco();



    protected:

        int ID;
        char Domicilio[50];
        char Telefono [20];
        char Mail [100];
};

#endif // CLIENTE_H
