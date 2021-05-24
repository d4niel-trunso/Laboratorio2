#include <iostream>
#include <cstdlib>
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "FuncionesGlobales.h"
using namespace std;

void error_msj(int cod, int i)/// A COMPLETAR, CADA UNO AGREGA ERRORES QUE NECESITE, SOLO SER A AGREGAR CASES AL SWITCH.
/// ES UTIL PARA SIMPLIFICAR EL C DIGO.
{
    switch(cod)
    {


    case 1:
        cout<<"Salida Voluntaria!."<<endl;
        cout<<"Operacion Cancelada. Presione cualquier Tecla para continuar."<<endl;
        anykey();
        break;

    case -1:
        cout<<"Error Validando, Este Campo SOLO permite Letras, Intente Nuevamente."<<endl;
        cout<<"Intento Numero "<<i<<"."<<endl;
        if(i>3)
        {
            cout<<"Si no podés y querés salir, ingresá ""000""."<<endl;
        }
        break;
    case -2:
        cout<<"Error Validando, Fecha Invalida. Intente Nuevamente."<<endl;
        cout<<"Intento Numero "<<i<<"."<<endl;
        if(i>3)
        {
            cout<<"Si no podés y querés salir, ingresá ""000""."<<endl;
        }
        break;
    case -3:
        cout<<"Error Validando, Ese codigo ya existe. Intente Nuevamente."<<endl;
        cout<<"Intento Numero "<<i<<"."<<endl;
        if(i>3)
        {
            cout<<"Si no podés y querés salir, ingresá ""000""."<<endl;
        }
        break;
    case -4:
        cout<<"Error Validando, Este campo solo permite Números Enteros. Intente Nuevamente."<<endl;
        cout<<"Intento Numero "<<i<<"."<<endl;
        if(i>3)
        {
            cout<<"Si no podés y querés salir, ingresá ""-999""."<<endl;
        }
        break;
    case -5:
        cout<<"Error Validando, ID INEXISTENTE. Intente Nuevamente."<<endl;
        cout<<"Intento Numero "<<i<<"."<<endl;
        if(i>3)
        {
            cout<<"Si no podés y querés salir, ingresá ""-999""."<<endl;
        }
        break;
    case -6:
        cout<<"Error. No se pudo acceder al archivo."<<endl;
        break;
    }
}
