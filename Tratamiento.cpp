
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
    MedicamentoLista.push_back(medicina);
}

int Tratamiento::getTamanno() {
    return MedicamentoLista.size();
}

string Tratamiento::toString() {
    stringstream s;
    int i;
    for (auto i = 0; i < getTamanno(); i++) {
        s << MedicamentoLista.at(i).toString() << endl;
    }
    return s.str();
}

Tratamiento::~Tratamiento() {}


#endif //BASIC_00_EXAMPLE_TRATAMIENTO_H
