
#include "PacienteAsintomatico.h"
#include "Paciente.h"

PacienteAsintomatico::PacienteAsintomatico() {}


PacienteAsintomatico::PacienteAsintomatico(int diaDeContagio, int mesDeContagio, int edad, string nombre,
                                           string apellido, string hospital,
                                           string estadoPulmonar) : PacienteConCovid19(diaDeContagio, mesDeContagio,
                                                                                       edad, nombre, apellido,
                                                                                       hospital) {
    this->setDiaDeContadio(diaDeContagio);
    this->setMesDeContagio(mesDeContagio);
    setEdad(edad);
    setNombre(nombre);
    setApellido(apellido);
    setHospital(hospital);
    this->estadoPulmonar = estadoPulmonar;

}

string PacienteAsintomatico::ToString() {
    stringstream s;
    s << "Nombre del paciente: " << getNombre() << " " << getApellido() << endl;
    s << "Edad del Pacienta: " << getEdad() << endl;
    s << "Fecha de contagio: El " << getDiaDeContagio() << "/" << getMesDeContagio() << "de este anno" << endl;
    s << "Estado Pulmonar: " << getEstadoPulmonar() << endl;
    return s.str();
}

string PacienteAsintomatico::getEstadoPulmonar() {
    return estadoPulmonar;
}
