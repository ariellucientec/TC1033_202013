#include"Persona.h"

#pragma once
class Estudiante : public Persona  //Hereda de la clase persona
{
protected:
    string matricula;

public:
    Estudiante();
    Estudiante(string nombre);
    void imprimirNombre();
};