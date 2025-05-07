//
// Created by santiago on 6/05/2025.
//

#ifndef EMPLEADOS_TECNICO_H
#define EMPLEADOS_TECNICO_H
#include "Persona.h"
using namespace std;

class Tecnico : public Persona{
public:
    Tecnico(string nombre, float salario);
    float calcularSalario() override;

};


#endif //EMPLEADOS_TECNICO_H
