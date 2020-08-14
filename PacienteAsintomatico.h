//
// Created by Sebastian on 8/14/2020.
//

#ifndef BASIC_00_EXAMPLE_PACIENTEASINTOMATICO_H
#define BASIC_00_EXAMPLE_PACIENTEASINTOMATICO_H

#include <iostream>
#include <sstream>
#include "Paciente.h"


using namespace std;

class PacienteAsintomatico : public PacienteConCovid19 {
private:
    string estadoPulmonar;


public:
    PacienteAsintomatico();

    PacienteAsintomatico(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido,
                         string hospital,
                         string estadoPulmonar);

    string ToString();

    ~PacienteAsintomatico();

    string getEstadoPulmonar();

    void setEstadoPulmonar(string estado);


};


#endif //BASIC_00_EXAMPLE_PACIENTEASINTOMATICO_H
