//
// Created by Sebastian on 8/14/2020.
//

#include "Medicamento.h"


Medicamento::Medicamento(const string nombreMedicamento, const double dosis, const int precio, const double nivelEfectividad, const int annioVencimiento)
{
    this->nombreMedicamento=nombreMedicamento;
    this->dosis=dosis;
    this->precio=precio;
    this->nivelEfectividad=nivelEfectividad;
    this->annioVencimiento=annioVencimiento;
}

Medicamento::~Medicamento() {

}

const string &Medicamento::getNombreMedicamento() const {
    return nombreMedicamento;
}

double Medicamento::getDosis() const {
    return dosis;
}

int Medicamento::getPrecio() const {
    return precio;
}

double Medicamento::getNivelEfectividad() const {
    return nivelEfectividad;
}

int Medicamento::getAnnioVencimiento() const {
    return annioVencimiento;
}

void Medicamento::setNombreMedicamento(const string &nombreMedicamento) {
    Medicamento::nombreMedicamento = nombreMedicamento;
}

void Medicamento::setDosis(double dosis) {
    Medicamento::dosis = dosis;
}

void Medicamento::setPrecio(int precio) {
    Medicamento::precio = precio;
}

void Medicamento::setNivelEfectividad(double nivelEfectividad) {
    Medicamento::nivelEfectividad = nivelEfectividad;
}

void Medicamento::setAnnioVencimiento(int annioVencimiento) {
    Medicamento::annioVencimiento = annioVencimiento;
}

string Medicamento::toString() {
    stringstream s;
    s<<"Nombre del medicamento: "<<getNombreMedicamento()<<endl;
    s<<"La dosis que debe de ser ingerida es: "<<getDosis()<<endl;
    s<<"Precio del Medicamento: "<<getPrecio()<<endl;
    s<<"Tiene un nivel de efectividad de: "<<getNivelEfectividad()<<endl;
    s<<"Fecha de vencimiento: "<<getAnnioVencimiento()<<endl;
    return s.str();
}
