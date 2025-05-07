//
// Created by santiago on 6/05/2025.
//


#include "Empresa.h"

Empresa::Empresa() {}

Empresa::~Empresa() {
    for (Persona* p : empleados)
        delete p;
}

void Empresa::inicializarDatos() {
    empleados.push_back(new Junior("Ana", 1000));
    empleados.push_back(new Junior("Luis", 1050));
    empleados.push_back(new Senior("Carlos", 2000));
    empleados.push_back(new Senior("Elena", 2100));
    empleados.push_back(new Tecnico("Mario", 3000));
    empleados.push_back(new Tecnico("Lucia", 3200));
    empleados.push_back(new Tester("Juan", 1500));
    empleados.push_back(new Tester("Sofia", 1600));
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
