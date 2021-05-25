#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED
#include <iostream>
#include <cstring>
#include "fecha.h"
using namespace std;

///CLASE VENDEDOR

class Vendedor{
  private://especificador de acceso
    int CantidadVentas;
    float Sueldo;
    float Comision;
    Fecha ingreso;
  public:
      Detalledeventa(int cv=0,int s=0, int c=0){
        CantidadVentas=cv;
        Sueldo=s;
        Comision=c;
    }

    void Cargar();
    void Mostrar();

    int getCantidadVentas(){return CantidadVentas;}
    float getSueldo(){return Sueldo;}
    float getComision(){return Comision;}
    Fecha getingreso(){return ingreso;}


    void setCantidadVentas(const int cv){CantidadVentas= cv;}
    void setSueldo(const int s){Sueldo= s;}
    void setComision(const int c){Comision=c;}
    void setIngreso(Fecha i){ingreso=i;}


  };//fin de la clase Vendedor


void Vendedor::Cargar(){
  cout<<"INGRESE CANTIDAD DE VENTAS: ";
  cin>>CantidadVentas;
  cout<<"INGRESE EL SUELDO: ";
  cin>>Sueldo;
  cout<<"INGRESE COMISION: ";
  cin>>Comision;
  cout<<"FECHA DE INGRESO"<<endl;
  ingreso.Cargar();
  }

void Vendedor::Mostrar(){
      cout<<"CANTIDAD DE VENTAS: ";
      cout<<CantidadVentas<<endl;
      cout<<"SUELDO: ";
      cout<<Sueldo<<endl;
      cout<<"COMISION: ";
      cout<<Comision<<endl;
      cout<<"FECHA DE INGRESO: ";
      ingreso.Mostrar();
      cout<<endl;
  }



#endif // VENDEDOR_H_INCLUDED
