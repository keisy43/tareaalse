cmake_minimum_required(VERSION 2.8.12)

project(tap2)


add_executable(${PROJECT_NAME} "main.cpp" "Geometrica.h" "Geometrica.cpp" "Circulo.h" "Circulo.cpp" "Cuadrado.h"
    "Cuadrado.cpp" "Triangulo.h" "Triangulo.cpp" "Pentagono.h" "Pentagono.cpp")
