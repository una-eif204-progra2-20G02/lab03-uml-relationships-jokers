//
// Created by Sebastian on 8/14/2020.
//

#ifndef BASIC_00_EXAMPLE_PACIENTEASINTOMATICO_H
#define BASIC_00_EXAMPLE_PACIENTEASINTOMATICO_H

#include <iostream>
#include <sstream>
#include "Paciente.h"


class PacienteConSintomas : public Paciente{
private:
    std::string sintomas;
public:
    PacienteConSintomas();

    PacienteConSintomas(int diaDeContagio, int mesDeContagio, int edad,std::string nombre,std::string apellido,std::string hospital,std::string sintomas);

    std::string getSintomas();

    void setSintomas(std::string sinto);

    std::string ToString() override;

    ~PacienteConSintomas();


};


#endif //BASIC_00_EXAMPLE_PACIENTEASINTOMATICO_H
