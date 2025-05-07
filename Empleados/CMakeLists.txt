cmake_minimum_required(VERSION 3.30)
project(Empleados)

set(CMAKE_CXX_STANDARD 20)

add_executable(Empleados src/main.cpp
        src/Persona.cpp
        src/Persona.h
        src/Senior.cpp
        src/Senior.h
        src/Junior.cpp
        src/Junior.h
        src/Tecnico.cpp
        src/Tecnico.h
        src/Tester.cpp
        src/Tester.h
        src/Empresa.cpp
        src/Empresa.h)
