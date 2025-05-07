#include <iostream>
#include "Empresa.h"
int main() {
    Empresa empresa;

    empresa.inicializarDatos();

    std::cout << "--- Nomina ---" << std::endl;
    empresa.procesarNomina();

    double total = empresa.calcularTotalNomina();
    std::cout << "Total a pagar: $" << total << std::endl;

    return 0;
}
