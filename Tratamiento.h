
#include<iostream>
#include<sstream>
#include "Medicamento.h"
#include <vector>
using namespace std;

class Tratamiento {
private:
    int diasDeTratamiento;
    vector<Medicamento> medicamentoLista;
public:
    Tratamiento();

    Tratamiento(int dias);

    void setDiasDeTratamiento(int dias);

    int getTamanno();

    void ingresarAlFinal(Medicamento medicina);

    string toString();
    ~Tratamiento();
};
