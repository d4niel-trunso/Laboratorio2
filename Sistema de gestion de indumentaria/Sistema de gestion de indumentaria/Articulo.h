#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED
#include <iostream>
#include <cstring>

using namespace std;

///CLASE ARTUCULO

class Articulo{
  private://especificador de acceso
    int IDArticulo;
    char marca[20];
    char genero[10];
    int stock;
    char color[10];
    float precio;
    char talle[5];
  public:
      Articulo(int i=0, const char *m="0000", const char *g="0000",int st=0,const char *c="0000", float p=0, int s=0, const char *t="0000"){
        IDArticulo=i;
        strcpy(marca,m);
        strcpy(genero,g);
        stock=st;
        strcpy(color,c);
        precio=p;
        strcpy(talle,t);
    }

    void Cargar();
    void Mostrar();

    int getIDArticulo(){return IDArticulo;}
    const char *getMarca(){return marca;}
    const char *getGenero(){return genero;}
    int getStock(){return stock;}
    const char *getColor(){return color;}
    float getPrecio(){return precio;}
    const char *getTalle(){return talle;}

    void setIDArticulo(const int a){IDArticulo=a;}
    void setMarca(const char *m){strcpy(marca,m);}
    void setGenero(const char *g){strcpy(genero,g);}
    void setStock(const int s){stock=s;}
    void setColor(const char *c){strcpy(color,c);}
    void setPrecio(const float p){precio=p;}
    void setTalle(const char *t){strcpy(talle,t);}


    bool grabarEnDisco();

  };//fin de la clase Articulo


void Articulo::Cargar(){
  cout<<"INGRESE EL ID DEL ARTICULO: ";
  cin>>IDArticulo;
  cout<<"INGRESE MARCA: ";
  cin>>marca;
  cout<<"INGRESE EL GENERO: ";
  cin>>genero;
  cout<<"INGRESE EL STOCK: ";
  cin>>stock;
  cout<<"INGRESE EL COLOR: ";
  cin>>color;
  cout<<"INGRESE EL PRECIO: ";
  cin>>precio;
  cout<<"INGRESE EL TALLE: "<<endl;
  cin>>talle;
  }

void Articulo::Mostrar(){
      cout<<"ID DEL ARTICULO: ";
      cout<<IDArticulo<<endl;
      cout<<"MARCA: ";
      cout<<marca<<endl;
      cout<<"GENERO: ";
      cout<<genero<<endl;
      cout<<"STOCK: ";
      cout<<stock<<endl;
      cout<<"COLOR: ";
      cout<<color<<endl;
      cout<<"PRECIO: ";
      cout<<precio<<endl;
      cout<<"TALLE: ";
      cout<<talle<<endl;

      cout<<endl;
  }


#endif // ARTICULO_H_INCLUDED
