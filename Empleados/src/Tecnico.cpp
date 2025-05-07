//
// Created by santiago on 6/05/2025.
//

#include "Tecnico.h"
Tecnico::Tecnico(string nombre, float salario): Persona(nombre, salario) {}

float Tecnico::calcularSalario() {
    return salario * 1.25;
}