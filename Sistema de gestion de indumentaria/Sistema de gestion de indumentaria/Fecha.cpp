using namespace std;
#include "Fecha.h"
#include "FuncionesGlobales.h"
#include <cstdlib>
#include "rlutil.h"
using namespace rlutil;

Fecha::Fecha()
{
    //ctor
}

int Fecha::CargarFecha()
{
    int error=0,i=0,aux;
    while (error!=0||error!=1)
    {
        cout<<"Ingrese Fecha "<<endl;
        cout<<"Fecha a Buscar (d/m/a):"<<endl;
        cin>>aux;
        setDia(aux);
        cout<<"/";
        cin>>aux;
        setMes(aux);
        cout<<"/";
        cin>>aux;
        setAnio(aux);
        error=ValidarFecha();
        if (error==-1)
        {
            i++;
            error_msj(-2,i);
            cin.get();
            system("cls");
        }
        else
            break;
    }
    return error;

};
int Fecha :: ValidarFecha()
{
    if(mes==0&&dia==0&&anio==0)
        return 1;
    if((mes>0&&mes<13)&&(anio>1910&&anio<=2020))
    {
        switch(mes)
        {
        case  1 :
        case  3 :
        case  5 :
        case  7 :
        case  8 :
        case 10 :
        case 12 :
            if ( dia >= 1 && dia <= 31 )
            {
                return 0;
            }
            else
            {
                return -1;
            }
        case  4 :
        case  6 :
        case  9 :
        case 11 :
            if ( (dia >= 1) && (dia <= 30) )
            {

                return 0;
            }
            else
                return -1;
        case  2 :
            if( (anio % 4 == 0 && anio % 100 != 0 )|| (anio % 400 == 0 ))
                if ( dia >= 1 && dia <= 29 )
                {

                    return 0 ;
                }
                else
                {
                    return -1;
                }
            else if ( dia >= 1 && dia <= 28 )
            {
                return 0;
            }
            else
            {
                return -1;
            }

        }
    }
    else
    {

        return -1;
    }
    return-1;
};
void AsignarOrdenaFechas(Fecha *reg1,Fecha *reg2)
{
    Fecha Aux;
    if(reg1->getAnio()<reg2->getAnio())
        return;
    else if(reg1->getAnio()==reg2->getAnio()&&reg1->getMes()<reg2->getMes())
        return;
    else if(reg1->getMes()==reg2->getMes()&&reg1->getDia()<reg2->getDia())
        return;
    if(reg2->getAnio()<reg1->getAnio())
    {
    CopiarFecha(Aux,*reg1);
    CopiarFecha(*reg1,*reg2);
    CopiarFecha(*reg2,Aux);
    }
    if(reg2->getAnio()==reg1->getAnio()&&reg2->getMes()<reg1->getMes())
    {
    CopiarFecha(Aux,*reg1);
    CopiarFecha(*reg1,*reg2);
    CopiarFecha(*reg2,Aux);
    }
    if(reg2->getMes()==reg1->getMes()&&reg2->getDia()<reg1->getDia())
       {
    CopiarFecha(Aux,*reg1);
    CopiarFecha(*reg1,*reg2);
    CopiarFecha(*reg2,Aux);
       }
};
void Fecha:: mostrar()
{
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
};


/*int ChequeoFechas(Fecha fech1,Fecha fech2,Venta *Aux)
{
    if(Aux->getFechaOperacion().getAnio()>=fech1.getAnio()&&Aux->getFechaOperacion().getAnio()<=fech2.getAnio())
    {
        if(Aux->getFechaOperacion().getMes()>=fech1.getMes()&&Aux->getFechaOperacion().getMes()<=fech2.getMes())
        {
            if(Aux->getFechaOperacion().getDia()>=fech1.getDia()&&Aux->getFechaOperacion().getDia()<=fech2.getDia())
            {
                return 0;
            }
        }
    }
    return -1;

};*/

void CopiarFecha(Fecha fech1,Fecha fech2)
{
    fech1.setAnio(fech2.getAnio());
    fech1.setMes(fech2.getMes());
    fech1.setDia(fech2.getDia());
}
