#include<string>
#include<iostream>
#include"Fecha.h"
#include"Calculadora.h"
#include"Mamifero.h"
using namespace std;

#pragma once
class Persona : public Mamifero
{
protected:
    Persona* papa; //ESTO NO ES UNA INSTANCIA

    string nombre;
    Fecha* fechaNacimiento; 
public:
    Persona();
    Persona(string elNombre, Fecha laFechaDeNacimiento, Persona* elPapa);

    void presentacion();

    int getEdad();
};