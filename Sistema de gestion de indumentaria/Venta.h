#ifndef VENTA_H_INCLUDED
#define VENTA_H_INCLUDED
#include <iostream>
#include <cstring>
#include "Fecha.h"
using namespace std;

///CLASE DE VENTA

class Venta{
  private://especificador de acceso
    int IDArticulo;
    int IDCliente;
    char FormaPago[10];
    int IDVendedor;
    Fecha fecha;
  public:
    Venta( const char *f="0000", int v=0, int a=0, int c=0,){
        strcpy(FormaPago,f);
        IDArticulo=a;
        IDCliente=c;
        IDVendedor=v;
    }
    void Cargar();
    void Mostrar();

    int getIDArticulo(){return IDArticulo;}
    int getIDCliente(){return IDCliente;}
    const char *getFormaPago(){return FormaPago;}
    int getIDVendedor(){return IDVendedor;}
    Fecha getFecha(){return fecha;}

    void setIDArticulo(const int a){IDArticulo=a;}
    void setIDCliente(const int c){IDCliente=c;}
    void setFormaPago(const char *f){strcpy(FormaPago,f);}
    void setIDVendedor(const int v){IDVendedor=v;}
    void setFecha(Fecha f){fecha=f;}

    void setDia(int d){fecha.setDia(d);}


void Venta::Cargar(){
  cout<<"INGRESE EL ID DEL ARTICULO: ";
  cin>>IDArticulo;
  cout<<"INGRESE EL ID DEL CLIENTE: ";
  cin>>IDCliente;
  cout<<"INGRESE LA FORMA DE PAGO: ";
  cin>>FormaPago;
  cout<<"INGRESE EL ID DEL VENDEDOR ";
  cin>>IDVendedor;
  cout<<"FECHA DE VENTA"<<endl;
  fecha.Cargar();
  }

void Venta::Mostrar(){
      cout<<"ID DEL ARTICULO: ";
      cout<<IDArticulo<<endl;
      cout<<"ID DEL CLIENTE: ";
      cout<<IDCliente<<endl;
      cout<<"FORMA DE PAGO: ";
      cout<<FormaPago<<endl;
      cout<<"ID DEL VENDEDOR: ";
      cout<<IDVendedor<<endl;
      cout<<"FECHA DE VENTA"<<endl;
      fecha.Mostrar();
      cout<<endl;

}


#endif // VENTA_H_INCLUDED
