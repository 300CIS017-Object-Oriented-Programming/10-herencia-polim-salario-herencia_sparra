//
// Created by santiago on 6/05/2025.
//

#ifndef EMPLEADOS_PERSONA_H
#define EMPLEADOS_PERSONA_H
#include <iostream>
#include <string>

using namespace std;

class Persona {
protected:
    string nombre;
    float salario;
public:
    Persona(string nombre, float salario);
    virtual float calcularSalario();
    virtual void mostrarInfo();
    virtual ~Persona() = default;
};


#endif //EMPLEADOS_PERSONA_H
