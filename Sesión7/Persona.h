#include<string>
#include<iostream>
#include"Fecha.h"
#include"Calculadora.h"

using namespace std;

#pragma once
class Persona
{
private:
    Persona *papa;

    string nombre;
    Fecha fechaNacimiento;
public:
    Persona();
    Persona(string elNombre, Fecha laFechaDeNacimiento);

    void presentacion();

    int getEdad();
};