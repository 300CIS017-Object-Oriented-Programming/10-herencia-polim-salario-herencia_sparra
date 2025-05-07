//
// Created by santiago on 6/05/2025.
//

#ifndef EMPLEADOS_TESTER_H
#define EMPLEADOS_TESTER_H

#include "Persona.h"
using namespace std;
class Tester : public Persona{
public:
    Tester(string nombre, float salario);
    float calcularSalario() override;

};


#endif //EMPLEADOS_TESTER_H
