#include"Persona.h"

Persona::Persona()
{
    cout << "constructor por default de persona" << endl;
    nombre = "Rodrigo";
    fechaNacimiento = new Fecha(1,1,1980);
}
Persona::Persona(string elNombre, Fecha laFechaDeNacimiento, Persona* elPapa)
{
    cout << "constructor con parámetros de persona" << endl;
    nombre = elNombre;
    fechaNacimiento = &laFechaDeNacimiento;
    papa = elPapa;
}

void Persona::presentacion()
{
    cout<<"Hola, soy " << nombre << " y nací el ";
    (*fechaNacimiento).presentacion();
    cout << " y mi los datos de mi papá son" << endl;
}

int Persona::getEdad()
{
    int anioActual = 2020;
    Calculadora miCalculadora;  // Asociación
    return miCalculadora.resta(anioActual, (*fechaNacimiento).getAnio());
}