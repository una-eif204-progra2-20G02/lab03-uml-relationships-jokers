
#ifndef BASIC_00_EXAMPLE_TRATAMIENTO_H
#define BASIC_00_EXAMPLE_TRATAMIENTO_H


#include "Medicamento.h"
#include "Tratamiento.h"

Tratamiento::Tratamiento() {
    MedicamentoLista = new vector<Medicamento>;
}

Tratamiento::Tratamiento(int dias) {
    setDiasDeTratamiento(dias);
    MedicamentoLista = new vector<Medicamento>;
}

void Tratamiento::setDiasDeTratamiento(int dias) {
    diasDeTratamiento = dias;
}

void Tratamiento::ingresarAlFinal(Medicamento medicina) {
    MedicamentoLista->push_back(medicina);
}

string Tratamiento::toString() {
    stringstream s;
    for (int i = 0; i < MedicamentoLista->size(); i++) {
        s << MedicamentoLista->at(i).toString() << endl;
        return s.str();
    }

}

Tratamiento::~Tratamiento() {}


#endif //BASIC_00_EXAMPLE_TRATAMIENTO_H
