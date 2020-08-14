//
// Created by Sebastian on 8/14/2020.
//

#include "Paciente.h"

PacienteConCovid19::PacienteConCovid19() {};

PacienteConCovid19::PacienteConCovid19(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido,
                                       string hospital) {
    this->diaDeContagio = diaDeContagio;
    this->mesDeContagio = mesDeContagio;
    this->edad = edad;
    this->nombre = nombre;
    this->apellido = apellido;
    this->hospital = hospital;

};

int PacienteConCovid19::getDiaDeContagio() { return diaDeContagio; }

void PacienteConCovid19::setDiaDeContadio(int dia) { diaDeContagio = dia; }

int PacienteConCovid19::getEdad() { return edad; }

void PacienteConCovid19::setEdad(int edad) { this->edad = edad; }

int PacienteConCovid19::getMesDeContagio() { return mesDeContagio; }

void PacienteConCovid19::setMesDeContagio(int mes) { mesDeContagio = mes; }

string PacienteConCovid19::getNombre() { return nombre; }

void PacienteConCovid19::setNombre(string nombre) { this->nombre = nombre; }

string PacienteConCovid19::getApellido() { return apellido; }

void PacienteConCovid19::setApellido(string Apellido) { apellido = Apellido; }

string PacienteConCovid19::getHospital() {
    return hospital;
}

void PacienteConCovid19::setHospital(string hospi) {
    hospital = hospi;
}

string PacienteConCovid19::ToString() {
    stringstream s;
    s << "Nombre del paciente: " << getNombre() << " " << getApellido() << endl;
    s << "Edad del Pacienta: " << getEdad() << endl;
    s << "Fecha de contagio: El " << getDiaDeContagio() << "/" << getMesDeContagio() << "de este anno" << endl;
    return s.str();
}

PacienteConCovid19::~PacienteConCovid19() {}




