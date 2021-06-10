#include "Cliente.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib>
#include "rlutil.h"
using namespace rlutil;
#include "FuncionesGlobales.h"
#include "Cliente.h"

const char *ArchivoClientes ="Clientes.dat";


void Cliente::cargar()
{
    int error = 0;
    Persona::cargar();

    if(Estado == false)
    {
        return;
    }
    cout << "ID: ";
    cin >> ID;
    cout << "Domicilio: ";
    cin.getline(Domicilio, 50);
    cin.ignore();
    cout << "Telefono: ";
    cin.getline(Telefono, 20);
    cin.ignore();
    cout << "Mail: ";
    cin.getline(Mail, 100);
    cout<<endl;
    //setFecha();

    error = guardarClienteEnDisco();
    if(error != 0)
    {
        cout << "Hubo un error guardando el cliente en el archivo." << endl;
        cout << "Ingrese cualquier tecla para continuar" << endl;
        anykey();
    }
    else
    {
        cout << "Cliente guardado en el archivo con exito!" << endl;
    }


}

int Cliente::guardarClienteEnDisco()///al final, tranqui para agregar clientes
{
    FILE *p;
    p = fopen(ArchivoClientes, "ab");
    if(p == NULL)
    {
        return -1;
    }
    if(fwrite(this,sizeof(Cliente),1, p)!=1)
    {
        fclose(p);
        return -1;
    }
    fclose (p);
    return 0;
};


