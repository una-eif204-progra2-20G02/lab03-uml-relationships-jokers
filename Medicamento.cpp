//
// Created by Sebastian on 8/14/2020.
//

#include "Medicamento.h"

Medicamento(){}
Medicamento(const string nombreMedicamento, const double dosis, const int precio, const double nivelEfectividad, const int annioVencimiento)
{

}
~Medicamento(){default}
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