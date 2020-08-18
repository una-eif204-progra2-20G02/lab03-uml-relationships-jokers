#include "iostream"
#include "sstream"
#include "Medicamento.h"
#include "PacienteAsintomatico.h"
#include "PacienteConSintomas.h"

using namespace std;

int main() {
    Medicamento Panadol = Medicamento("Panadol", 12.4, 5000, 90, 2030);
    Medicamento Acetaminofen = Medicamento("Acetaminofen", 5.2, 3000, 75, 2032);
    Medicamento Vitaminas = Medicamento("Vitaminas", 3.3, 1000, 50, 2023);
    Tratamiento *PlanSebas = new Tratamiento(14);
    Tratamiento *PlanGerson = new Tratamiento(30);
    PlanSebas->ingresarAlFinal(Panadol);
    PlanSebas->ingresarAlFinal(Acetaminofen);
    PlanGerson->ingresarAlFinal(Vitaminas);
    PlanGerson->ingresarAlFinal(Panadol);
    PacienteAsintomatico *Sebas = new PacienteAsintomatico(31, 05, 20, "Sebastian", "Cambronero", "Mexico","Excelente",PlanSebas);
    PacienteAsintomatico *Gerson = new PacienteAsintomatico(14, 11, 20, "Gerson", "Hernandez", "Mexico", "Muy Malo",PlanGerson);
    cout << Sebas->ToString() << endl;
    cout << Gerson->ToString() << endl;

    return 0;
}