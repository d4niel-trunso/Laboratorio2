#ifndef DETALLEDEVENTA_H_INCLUDED
#define DETALLEDEVENTA_H_INCLUDED
#include <iostream>
#include <cstring>

using namespace std;

///CLASE DETALLE DE VENTA

class Detalledeventa{
  private://especificador de acceso
    int IDventa;
    int IDprenda;
    int cantidad;
    float precio;
  public:
      Detalledeventa(int iv=0,int ip=0, int c=0, int p=0){
        IDventa=iv;
        IDprenda=ip;
        cantidad=c;
        precio=p;
    }

    void Cargar();
    void Mostrar();

    int getIDventa(){return IDventa;}
    int getIDprenda(){return IDprenda;}
    int getCantidad(){return cantidad;}
    float getPrecio(){return precio;}


    void setIDventa(const int iv){IDventa= iv;}
    void setIDprenda(const int ip){IDprenda= ip;}
    void setCantidad(const int c){cantidad=c;}
    void setPrecio(const float p){precio=p;}


  };//fin de la clase Detalle de venta


void Detalledeventa::Cargar(){
  cout<<"INGRESE EL ID DE VENTA: ";
  cin>>IDventa;
  cout<<"INGRESE EL ID DE PRENDA: ";
  cin>>IDprenda;
  cout<<"INGRESE CANTIDAD: ";
  cin>>cantidad;
  cout<<"INGRESE EL PRECIO: ";
  cin>>precio;
  }

void Detalledeventa::Mostrar(){
      cout<<"ID DE VENTA: ";
      cout<<IDventa<<endl;
      cout<<"ID DE PRENDA: ";
      cout<<IDprenda<<endl;
      cout<<"CANTIDAD: ";
      cout<<cantidad<<endl;
      cout<<"PRECIO: ";
      cout<<precio<<endl;

      cout<<endl;
  }


#endif // DETALLEDEVENTA_H_INCLUDED
