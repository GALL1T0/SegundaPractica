#include <iostream>
#include <stdlib.h>
#include "propietario.cpp"
using namespace std;

int main()
{
    propietario p;
    int opc;

   do{
    cout<<"|----------------------|"<<endl;
    cout<<"Menu de dispersion"<<endl;
    cout<<"1.-Ejecutar funcion de dispersion "<<endl;
    cout<<"2.-Mostrar resultados de la funcion "<<endl;
    cout<<"3.-Mostrar el numero de frecuencias "<<endl;
    cout<<"4.-Salir"<<endl;
    cout<<"|-----------------------------|"<<endl;
    cin>> opc;
    system("pause");
    system("cls");
    switch(opc){
    case 1:
        cout<<"Ejecucion de funcion de dispersion"<<endl;
        p.dispersion();
        system("pause");
        system("cls");
        break;
    case 2:
        cout<<"Resultados de la funcion: "<<endl;
        system("pause");
        system("cls");
        break;
    case 3:
        cout<<"Frecuencias: "<<endl;
        system("pause");
        system("cls");
        break;
    default:
        cout<<"Opcion incorrecta"<<endl;
        break;
    }

   }while(opc!=4);
    return 0;
}
