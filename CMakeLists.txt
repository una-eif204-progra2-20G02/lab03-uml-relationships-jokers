cmake_minimum_required(VERSION 3.14)
project(lab03-uml-relationship-jokers)

set(CMAKE_CXX_STANDARD 17)
add_executable(sample PacienteCovid19.cpp PacienteCovid19.h PacienteConSintomas.cpp PacienteConSintomas.h PacienteAsintomatico.cpp PacienteAsintomatico.h Medicamento.cpp Medicamento.h Tratamiento.cpp Tratamiento.h Main.cpp)