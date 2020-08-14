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

    Medicamento(const string nombreMedicamento, const double dosis, const int precio, const double nivelEfectividad, const int annioVencimiento);
    ~Medicamento();

    const string &getNombreMedicamento() const;

    void setNombreMedicamento(const string &nombreMedicamento);

    int getPrecio() const;
    void setPrecio(int precio);
    double getDosis() const;
    void setDosis(double dosis);
    double getNivelEfectividad() const;

    void setNivelEfectividad(double nivelEfectividad);

    int getAnnioVencimiento() const;

    void setAnnioVencimiento(int annioVencimiento);

    string toString();


};


#endif //BASIC_00_EXAMPLE_MEDICAMENTO_H
