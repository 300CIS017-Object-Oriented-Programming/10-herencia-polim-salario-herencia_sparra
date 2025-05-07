//
// Created by santiago on 6/05/2025.
//

#ifndef EMPLEADOS_EMPRESA_H
#define EMPLEADOS_EMPRESA_H
#include <vector>
#include "Persona.h"
#include "Junior.h"
#include "Senior.h"
#include "Tecnico.h"
#include "Tester.h"
#include <iostream>

class Empresa {
private:
    std::vector<Persona*> empleados;
public:
    Empresa();
    ~Empresa();
    void inicializarDatos();
    void procesarNomina();
    float calcularTotalNomina();
};

#endif //EMPLEADOS_EMPRESA_H
