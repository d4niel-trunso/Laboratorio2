#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <iostream>

using namespace std;

class Fecha
{
protected:
    int dia;
    int mes;
    int anio;
public:
    Fecha();
    void mostrar();
    int ValidarFecha(Fecha FechaAux);
    int CargarFecha();
    int ValidarFecha();


    int getDia()
    {
        return dia;
    };
    int getMes()
    {
        return mes;
    };
    int getAnio()
    {
        return anio;
    };
    void setDia(int d)
    {
        dia=d;
    };
    void setMes(int m)
    {
        mes=m;
    };
    void setAnio(int a)
    {
        anio=a;
    };


};
void AsignarOrdenaFechas(Fecha *reg1,Fecha *reg2);
//int ChequeoFechas(Fecha fech1,Fecha fecha2,Venta *Aux);
void CopiarFecha(Fecha fech1,Fecha fech2);


#endif // FECHA_H_INCLUDED
