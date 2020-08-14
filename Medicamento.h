//
// Created by Sebastian on 8/14/2020.
//

#ifndef BASIC_00_EXAMPLE_MEDICAMENTO_H
#define BASIC_00_EXAMPLE_MEDICAMENTO_H

#include<iostream>
#include<sstream>

using namespace std;

class Medicamento {

private:
    string nombreMedicamento;
    double dosis;
    int precio;
    double nivelEfectividad;
    int annioVencimiento;


public:

    Medicamento();
    Medicamento(const string nombreMedicamento, const double dosis, const int precio, const double nivelEfectividad, const int annioVencimiento);
    ~Medicamento();
    string getNombreMedicamento();
    void setNombreMedicamento(string nombreMedicamento);
    double getDosis();
    void setDosis(double dosis);
    int getPrecio();
    void setPrecio(int precio);
    double getNivelEfectividad();
    void setNivelEfectividad(double nivelEfectividad);
    int getAnnioVencimiento();
    void setAnnioVencimiento(int annioVencimiento);
    string toString();

};


#endif //BASIC_00_EXAMPLE_MEDICAMENTO_H
