#include "Menu.h"
#include "Cliente.h"
#include <cstdlib>
#include <cstring>
#include "rlutil.h"

using namespace std;
using namespace rlutil;

void menuPrincipal()
{
    while(true)
    {
        cls();
        cout << "MENU PRINCIPAL         " << endl;
        cout << "-----------------------" << endl;
        cout << "1) CLIENTES            " << endl;
        cout << "2) VENDEDORES          " << endl;
        cout << "3) ARTICULOS           " << endl;
        cout << "4) VENTAS              " << endl;
        cout << "5) REPORTES            " << endl;
        cout << "6) CONFIGURACION       " << endl;
        cout << "-----------------------" << endl;
        cout << "0) SALIR DEL PROGRAMA  " << endl;

        int pos;
        cout << endl << "> ";
        cin >> pos;

        switch(pos)
        {
        case 1:
            menuClientes();
            break;
        case 2:
            //menuVentas();
            break;
        case 3:
            //menuReportes();
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            system("cls");
            cout << "ESTE TRABAJO PRACTICO FUE REALIZADO POR: " << endl << endl;
            cout << "DANIEL TRUNSO - TOMAS CACERES - TOMAS TALLARICO" << endl << endl << endl;
            system("pause");
            break;
        case 0:
            cls();
            cout << "Gracias por usar este sistema" << endl << endl;
            cout << "Hasta la proxima" << endl << endl;
            system("pause");
            return;
            break;
        default:
            cout << endl;
            cout << "Opcion incorrecta" << endl;
            cout << "Ingrese una opcion valida" << endl << endl;
            system("pause");
            break;
        }
    }
}

void menuClientes()
{
    //struct usuario reg;
    Cliente cli;
    while(true)
    {
        cls();
        setColor(YELLOW);
        cout << "MENU CLIENTES                       " << endl;
        cout << "------------------------------------" << endl;
        cout << "1) NUEVO CLIENTE                    " << endl;
        cout << "2) MODIFICAR CLIENTE                " << endl;
        cout << "3) LISTAR CLIENTE POR DNI           " << endl;
        cout << "4) LISTAR TODOS LOS CLIENTE         " << endl;
        cout << "5) ELIMINAR USUARIO                 " << endl;
        cout << "------------------------------------" << endl;
        cout << "0) VOLVER AL MENU PRINCIPAL         " << endl;

        int pos;
        cout << endl << "> ";
        cin >> pos;
        cls();
        switch(pos)
        {
        case 1:
            cout<<"            ~ Nuevo Cliente ~          "<<endl;
            cli.cargar();
            anykey();
            break;
        /*case 2:
            modificarUsuario();
            break;
        case 3:
            listar_usuario_xid();
            system("pause");
            break;
        case 4:
            system("cls");
            cout << "Listado de usuarios" << endl;
            leerArchivoUsuarios();
            system("pause");
            break;
        case 5:
            bajaLogicaUsuario();
            cout << "El usuario se elimino correctamente" << endl;
            system("pause");
            break;*/
        case 0:
            return;
            break;
        }
    }
}
/*
void menuVentas()
{
    Venta reg;
    while(true)
    {
        cls();
        setColor(YELLOW);
        cout << "MENU VENTA                              " << endl;
        cout << "----------------------------------------" << endl;
        cout << "1) NUEVA VENTA                          " << endl;
        cout << "2) MODIFICAR VENTA                      " << endl;
        cout << "3) LISTAR VENTA POR ID                  " << endl;
        cout << "4) LISTAR VENTA DEL MES                 " << endl;
        cout << "5) LISTAR TODOS LOS ENTRENAMIENTOS      " << endl;
        cout << "----------------------------------------" << endl;
        cout << "0) VOLVER AL MENU PRINCIPAL             " << endl;

        int pos;
        cout << endl << "> ";
        cin >> pos;

        switch(pos)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 0:
            return;
            break;
        }
    }
}

void menuReportes()
{
     reg;
    while(true)
    {
        cls();
        setColor(YELLOW);
        cout << "MENU                     " << endl;
        cout << "--------------------------" << endl;
        cout << "1)                                      " << endl;
        cout << "2)                                      " << endl;
        cout << "----------------------------------------" << endl;
        cout << "0) VOLVER AL MENU PRINCIPAL             " << endl;

        int pos;
        cout << endl << "> ";
        cin >> pos;

        switch(pos)
        {
        case 1:

            break;
        case 2:

            break;
        case 0:
            return;
            break;
        }
    }
}

*/
