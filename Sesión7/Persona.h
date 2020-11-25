#include<string>
#include<iostream>
#include"Fecha.h"

using namespace std;

#pragma once
class Persona
{
private:
    string nombre;
    Fecha fechaNacimiento;
public:
    Persona();
    Persona(string elNombre, Fecha laFechaDeNacimiento);

    void presentacion();
};