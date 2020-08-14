//
// Created by Sebastian on 8/14/2020.
//

#ifndef BASIC_00_EXAMPLE_PACIENTE_H
#define BASIC_00_EXAMPLE_PACIENTE_H

#include <iostream>
#include <sstream>

using namespace std;

class PacienteConCovid19 {
private:
    int diaDeContagio;
    int mesDeContagio;
    int edad;
    string nombre;
    string apellido;
public:
    PacienteConCovid19();

    PacienteConCovid19(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido);

    int getDiaDeContagio();

    void setDiaDeContadio(int dia);

    int getMesDeContagio();

    int getEdad();

    void setEdad(int edad);

    void setMesDeContadio(int mes);

    string getNombre();

    void setNombre(string nombre);

    string getApellido();

    void setApellido(string Apellido);

    string ToString();

    ~PacienteConCovid19();


};


#endif //BASIC_00_EXAMPLE_PACIENTE_H
