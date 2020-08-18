#include "iostream"
#include "sstream"
#include "Medicamento.h"
#include "PacienteAsintomatico.h"
#include "PacienteConSintomas.h"

using namespace std;

int main() {
    Medicamento panadol = Medicamento("Panadol", 12.4, 5000, 90, 2030);
    Medicamento acetaminofen = Medicamento("Acetaminofen", 5.2, 3000, 75, 2032);
    Medicamento vitaminas = Medicamento("Vitaminas", 3.3, 1000, 50, 2023);
    Tratamiento *planSebas = new Tratamiento(14);
    Tratamiento *planGerson = new Tratamiento(30);
    planSebas->ingresarAlFinal(panadol);
    planSebas->ingresarAlFinal(acetaminofen);
    planGerson->ingresarAlFinal(vitaminas);
    planGerson->ingresarAlFinal(panadol);
    PacienteAsintomatico *sebas = new PacienteAsintomatico(31, 05, 20, "Sebastian", "Cambronero", "Mexico", "Excelente",
                                                           planSebas);
    PacienteAsintomatico *gerson = new PacienteAsintomatico(14, 11, 20, "Gerson", "Hernandez", "Mexico", "Muy Malo",
                                                            planGerson);
    cout << sebas->ToString() << endl;
    cout << gerson->ToString() << endl;

    return 0;
}