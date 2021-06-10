#include <iostream>
#include <cstdlib>
#include "Persona.h"
#include "Menu.h"

using namespace std;

int main()
{
    //menuVentas();
    menuPrincipal();
    Persona obj;
    obj.cargar();
    obj.mostrar();

    return 0;
}
