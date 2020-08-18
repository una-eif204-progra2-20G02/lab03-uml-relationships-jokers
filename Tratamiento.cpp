
#ifndef BASIC_00_EXAMPLE_TRATAMIENTO_H
#define BASIC_00_EXAMPLE_TRATAMIENTO_H


#include "Medicamento.h"
#include "Tratamiento.h"

Tratamiento::Tratamiento() {
}

Tratamiento::Tratamiento(int dias) {
    setDiasDeTratamiento(dias);
}

void Tratamiento::setDiasDeTratamiento(int dias) {
    diasDeTratamiento = dias;
}

void Tratamiento::ingresarAlFinal(Medicamento medicina) {
    medicamentoLista.push_back(medicina);
}

int Tratamiento::getTamanno() {
    return medicamentoLista.size();
}

string Tratamiento::toString() {
    stringstream s;
    int i;
    for (auto i = 0; i < getTamanno(); i++) {
        s << medicamentoLista.at(i).toString() << endl;
    }
    return s.str();
}

Tratamiento::~Tratamiento() {
    medicamentoLista.clear();
}


#endif //BASIC_00_EXAMPLE_TRATAMIENTO_H
