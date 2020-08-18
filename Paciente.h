//
// Created by Sebastian on 8/14/2020.
//

#ifndef BASIC_00_EXAMPLE_PACIENTE_H
#define BASIC_00_EXAMPLE_PACIENTE_H

#include <iostream>
#include <sstream>

#include "Tratamiento.h"
using namespace std;

class Paciente{
protected:
    int diaDeContagio;
    int mesDeContagio;
    int edad;
    string nombre;
    string apellido;
    string hospital;
    Tratamiento *tratamiento;
public:
    Paciente();

    Paciente(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido, string hospital);

    string getHospital();

    void setHospital(string hospi);

    int getDiaDeContagio();

    void setDiaDeContadio(int dia);

    int getMesDeContagio();

    void setMesDeContagio(int mes);

    int getEdad();

    void setEdad(int edad);

    string getNombre();

    void setNombre(string nombre);

    string getApellido();

    void setApellido(string Apellido);

    string getMedicamentosLista();

    virtual string ToString() = 0;

    ~Paciente();


};


#endif //BASIC_00_EXAMPLE_PACIENTE_H
