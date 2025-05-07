//
// Created by santiago on 6/05/2025.
//

#include "Persona.h"

using namespace std;

Persona::Persona(string nombre, float salario) {
    this->nombre = nombre;
    this->salario = salario;
}

float Persona::calcularSalario() {
    return salario;
}

void Persona::mostrarInfo() {
    cout << "Informacion del empleado: \n";
    cout << "Nombre: " << this->nombre<<endl;
    cout << "Salario: "<<" $" << this->calcularSalario();
    cout << endl;
}