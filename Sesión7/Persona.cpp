#include"Persona.h"

Persona::Persona()
{
    nombre = "Rodrigo";
    fechaNacimiento = Fecha(1,1,1980);
}
Persona::Persona(string elNombre, Fecha laFechaDeNacimiento)
{
    nombre = elNombre;
    fechaNacimiento = laFechaDeNacimiento;
}

void Persona::presentacion()
{
    cout<<"Hola, soy " << nombre << " y nací el ";
    fechaNacimiento.presentacion();
}