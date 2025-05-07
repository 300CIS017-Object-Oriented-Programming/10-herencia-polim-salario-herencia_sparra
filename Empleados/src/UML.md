### Empleados
    classDiagram
    class Persona {
    - nombre
    - salarioBase
    + Persona(nombre, salarioBase )
    + calcularSalario()
    + mostrarInfo()
    }
 
    class DesarrolladorJunior {
        + calcularSalario() 
    }

    class DesarrolladorSenior {
        + calcularSalario() 
    }

    class LiderTecnico {
        + calcularSalario() 
    }

    class Tester {
        + calcularSalario()
    }

    class Empresa {
        - empleados : vector<Persona*>
        + Empresa()
        + ~Empresa()
        + inicializarDatos()
        + procesarNomina()
        + calcularTotalNomina()
    }

    Persona <|-- DesarrolladorJunior
    Persona <|-- DesarrolladorSenior
    Persona <|-- LiderTecnico
    Persona <|-- Tester
    Empresa --> Persona : contiene
