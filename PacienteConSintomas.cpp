//
// Created by Sebastian on 8/14/2020.
//

#include "PacienteConSintomas.h"
#include "Paciente.h"

PacienteConSintomas::PacienteConSintomas() {

}


PacienteConSintomas::PacienteConSintomas(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido,
                                         string hospital, string sintomas) : PacienteConCovid19(diaDeContagio,
                                                                                                mesDeContagio, edad,
                                                                                                nombre, apellido,
                                                                                                hospital) {
    this->setDiaDeContadio(diaDeContagio);
    this->setMesDeContagio(mesDeContagio);
    setEdad(edad);
    setNombre(nombre);
    setApellido(apellido);
    setHospital(hospital);
    this->sintomas = sintomas;
}

string PacienteConSintomas::getSintomas() { return sintomas; }

void PacienteConSintomas::setSintomas(string sinto) { sintomas = sinto; }

string PacienteConSintomas::ToString() {
    stringstream s;
    s << "Nombre del paciente: " << getNombre() << " " << getApellido() << endl;
    s << "Edad del Pacienta: " << getEdad() << endl;
    s << "Fecha de contagio: El " << getDiaDeContagio() << "/" << getMesDeContagio() << " de este anno" << endl;
    s << "Hospital: " << getHospital() << endl;
    s << "Sintomas: " << getSintomas() << endl;
    // s << "Plan de tratamiento: " << getMedicamentosLista()<<endl;
    return s.str();
}


