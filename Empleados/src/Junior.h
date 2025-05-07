//
// Created by santiago on 6/05/2025.
//

#ifndef EMPLEADOS_JUNIOR_H
#define EMPLEADOS_JUNIOR_H
#include "Persona.h"
using namespace std;

class Junior : public Persona{
public:
    Junior(string nombre, float salario);
    float calcularSalario() override;
};


#endif //EMPLEADOS_JUNIOR_H
