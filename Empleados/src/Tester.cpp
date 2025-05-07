//
// Created by santiago on 6/05/2025.
//

#include "Tester.h"
Tester::Tester(string nombre, float salario): Persona(nombre, salario) {}

float Tester::calcularSalario() {
    return salario * 1.25;
}