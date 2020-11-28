#include"Estudiante.h"

Estudiante::Estudiante()
{
// Aquí no hay nada
}

Estudiante::Estudiante(string elNombre)
{
    cout << "constructor con parámetros de Estudiante " << endl;
    nombre = elNombre;
}

void Estudiante::imprimirNombre()
{
    cout << nombre << matricula << endl;
}

