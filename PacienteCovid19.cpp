//
// Created by Sebastian on 8/14/2020.
//

#include "PacienteCovid19.h"

PacienteConCovid19() {};

PacienteConCovid19(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido) {
    this->diaDeContagio = diaDeContagio;
    this->mesDeContagio = mesDeContagio;
    this->edad = edad;
    this->nombre = nombre;
    this->apellido = apellido;

};

int getDiaDeContagio() { return diaDeContagio; }

void setDiaDeContadio(int dia) { diaDeContagio = dia; }

int getEdad() { return edad; }

void setEdad(int edad) { this->edad = edad; }

int getMesDeContagio() { return mesDeContagio; }

void setMesDeContadio(int mes) { mesDeContagio = mes; }

string getNombre() { return nombre; }

void setNombre(string nombre) { this->nombre = nombre; }

string getApellido() { return apellido; }

void setApellido(string Apellido) { apellido = Apellido };

string ToString() {
    stringstream s;
    s << "Nombre del paciente: " << getNombre() << " " << getApellido() << endl;
    s << "Edad del Pacienta: " << getEdad() << endl;
    s << "Fecha de contagio: El " << getDiaDeContagio() << "/" << getMesDeContagio() << "de este anno" << endl;
}

~

PacienteConCovid19() {};

