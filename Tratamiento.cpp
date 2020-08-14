
#ifndef BASIC_00_EXAMPLE_TRATAMIENTO_H
#define BASIC_00_EXAMPLE_TRATAMIENTO_H


#include "Medicamento.h"
#include "Tratamiento.h"

Tratamiento::Tratamiento() {
    MedicamentoLista *= new MedicamentoLista();
}

Tratamiento::Tratamiento(int diasDeTratamiengo) {
    this->diasDeTratamiendo = diasDeTratamiento;
    MedicamentoLista *= new MedicamentoLista();
}

void Tratamiento::ingresarAlFinal(Medicamento) {}

string Tratamiento::toString() {}

Tratamiento::~Tratamiento() {}


#endif //BASIC_00_EXAMPLE_TRATAMIENTO_H
