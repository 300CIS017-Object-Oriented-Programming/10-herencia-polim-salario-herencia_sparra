//
// Created by santiago on 6/05/2025.
//


#include "Empresa.h"

Empresa::Empresa() {
    inicializarDatos();
}

Empresa::~Empresa() {
    for (Persona* p : empleados)
        delete p;
}

void Empresa::inicializarDatos() {
    empleados.push_back(new Junior("Santi", 1200));
    empleados.push_back(new Junior("Sebas", 1300));
    empleados.push_back(new Senior("Lucho", 2100));
    empleados.push_back(new Senior("Alana", 2400));
    empleados.push_back(new Tecnico("Marlon", 4000));
    empleados.push_back(new Tecnico("Pedro", 3200));
    empleados.push_back(new Tester("Jose", 5500));
    empleados.push_back(new Tester("Laura", 6600));
}

void Empresa::procesarNomina(){
    for (Persona* p : empleados)
        p->mostrarInfo();
}
float Empresa::calcularTotalNomina(){
    double total = 0;
    for (Persona* p : empleados)
        total += p->calcularSalario();
    return total;
}
