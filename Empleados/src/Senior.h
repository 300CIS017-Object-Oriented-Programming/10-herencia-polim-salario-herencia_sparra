//
// Created by santiago on 6/05/2025.
//

#ifndef EMPLEADOS_SENIOR_H
#define EMPLEADOS_SENIOR_H
#include "Persona.h"
using namespace std;

class Senior : public Persona{
public:
    Senior(string nombre, float salario);
    float calcularSalario() override;
};


#endif //EMPLEADOS_SENIOR_H
