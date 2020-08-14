//
// Created by Sebastian on 8/14/2020.
//

#ifndef BASIC_00_EXAMPLE_PACIENTEASINTOMATICO_H
#define BASIC_00_EXAMPLE_PACIENTEASINTOMATICO_H

#include <iostream>
#include <sstream>
#include "Paciente.h"

using namespace std;

class PacienteConSintomas : public PacienteConCovid19 {
private:
    string sintomas;
public:
    PacienteConSintomas();

    PacienteConSintomas(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido,
                        string hospital,
                        string sintomas);

    string getSintomas();

    void setSintomas(string sinto);

    string ToString();

    ~PacienteConSintomas();


};


#endif //BASIC_00_EXAMPLE_PACIENTEASINTOMATICO_H
