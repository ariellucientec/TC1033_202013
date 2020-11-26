#include"Persona.h"

Persona::Persona()
{
    cout << "constructor por default de persona" << endl;
    nombre = "Rodrigo";
    fechaNacimiento = Fecha(1,1,1980);
}
Persona::Persona(string elNombre, Fecha laFechaDeNacimiento)
{
    cout << "constructor con parámetros de persona" << endl;
    nombre = elNombre;
    fechaNacimiento = laFechaDeNacimiento;
}

void Persona::presentacion()
{
    cout<<"Hola, soy " << nombre << " y nací el ";
    fechaNacimiento.presentacion();
}

int Persona::getEdad()
{
    int anioActual = 2020;
    Calculadora miCalculadora;  // Asociación
    return miCalculadora.resta(anioActual, fechaNacimiento.getAnio());
}