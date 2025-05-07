//
// Created by santiago on 6/05/2025.
//

#include "Senior.h"
Senior::Senior(string nombre, float salario): Persona(nombre, salario) {}

float Senior::calcularSalario() {
    return salario * 1.20;
}
