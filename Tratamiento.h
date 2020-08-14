#include<iostream>
#include<sstream>
#include "Medicamento.h"
#include <vector>

using namespace std;

class Tratamiento {
private:
    vector<Medicamento> *MedicamentoLista;
    int diasDeTratamiento;
public:
    Tratamiento();

    Tratamiento(int diasDeTratamiengo);

    void ingresarAlFinal(Medicamento);

    void setDiasDeTratamiento(int dias);

    int getDiasDeTratamiento();

    string toString();

    ~Tratamiento();
};



