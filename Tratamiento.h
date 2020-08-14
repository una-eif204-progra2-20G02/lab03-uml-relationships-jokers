//
// Created by Sebastian on 8/14/2020.
//

#ifndef BASIC_00_EXAMPLE_TRATAMIENTO_H
#define BASIC_00_EXAMPLE_TRATAMIENTO_H

#include<iostream>
#include<sstream>
#include "Medicamento.h"
#include <vector>

using namespace std;

class Tratamiento {
private:
    vector<Medicamento> *MedicamentoLista;
    int diasDeTratamiento;
public:
    Tratamiento();

    Tratamiento(int diasDeTratamiengo);

    void ingresarAlFinal(Medicamento);

    string toString();

    ~Tratamiento();
};


#endif //BASIC_00_EXAMPLE_TRATAMIENTO_H
