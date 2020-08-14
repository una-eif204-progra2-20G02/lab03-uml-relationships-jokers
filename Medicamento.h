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

    Medicamento(string nombreMedicamento, double dosis, int precio, double nivelEfectividad, int annioVencimiento);

    ~Medicamento();

    string getNombreMedicamento();

    void setNombreMedicamento(string nombreMedicamento);

    int getPrecio();

    void setPrecio(int precio);

    double getDosis();

    void setDosis(double dosis);

    double getNivelEfectividad();

    void setNivelEfectividad(double nivelEfectividad);

    int getAnnioVencimiento();

    void setAnnioVencimiento(int annioVencimiento);

    string toString();


};


#endif //BASIC_00_EXAMPLE_MEDICAMENTO_H
