#ifndef PROPIETARIO_H_INCLUDED
#define PROPIETARIO_H_INCLUDED

class propietario{
private:
    //atributos
    char placa[12];
    char nombre[30];
    char domicilio[20];
    char provincia[20];

public:
    propietario(){//Contructor por default
        //nada
    }


    //metodos
    void dispersion();
    void mostrarResultados();
    void mostrarFrecuencia();
    void setPlaca(char Placa[12]);//obtener placa
    char getPlaca();
};


#endif // PROPIETARIO_H_INCLUDED
