#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib>
#include "rlutil.h"
using namespace rlutil;
#include "Persona.h"
#include "Fecha.h"
#include "FuncionesGlobales.h"


void Persona::cargar()
{
    cout << "ID: ";
    cin >> ID;
    cout << "Nombres: ";
    cin.ignore();
    cin.getline(Nombres,50);
    cout << "Apellidos :";
    cin.getline(Apellidos, 50);
    cout<<endl;
    setFecha();

}

int Persona::setFecha()
{
    int error=0,i=0,aux;
    while (error!=0||error!=1)
    {
        cout<<"Ingrese la Fecha de Nacimiento"<<endl;
        cout<<"Fecha de nacimiento (d/m/a):"<<endl;
        cin>>aux;
        fechaNac.setDia(aux);
        cout<<"/";
        cin>>aux;
        fechaNac.setMes(aux);
        cout<<"/";
        cin>>aux;
        fechaNac.setAnio(aux);
        error=fechaNac.ValidarFecha();
        if (error==-1)
        {
            i++;
            error_msj(-2,i);
            anykey();
            cls();
        }
        else
            break;
    }
    return error;
}
