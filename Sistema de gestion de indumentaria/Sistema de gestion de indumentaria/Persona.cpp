#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib>
#include "rlutil.h"
using namespace rlutil;
#include "Persona.h"
//#include "Fecha.h"
#include "FuncionesGlobales.h"


void Persona::cargar()
{
    Persona reg;
    cout << "DNI: ";
    cin >> DNI;
    cout << "Apellidos: ";
    cin.ignore();
    cin.getline(Apellidos, 50);
    cout << "Nombres: ";
    cin.ignore();
    cin.getline(Nombres,50);
    //setFecha();
    //obj.CargarFecha();
    Fecha::CargarFecha();
    Estado = true;
}

void Persona::mostrar()
{
    cout << "DNI: " << DNI << endl;
    cout << "Apellido: " << Apellidos << endl;
    cout << "Nombres: " << Nombres << endl;
    Fecha::mostrar();
}

/*int Persona::setFecha()
{
    int error=0,i=0,aux;
    while (error!=0||error!=1)
    {
        cout<<"Ingrese la Fecha de Nacimiento"<<endl;
        cout<<"Fecha de nacimiento (dd/mm/aaaa):"<<endl;
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
*/
