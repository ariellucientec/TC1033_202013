#include"Persona.h"

Persona::Persona()   // Constructor default
{
    cout << "Estoy en el constructor" << endl;
}

Persona::Persona(string name, int altura, int peso)
{
    setName(name);
    setAltura(altura);
    setPeso(peso);    
}

void Persona::comer()    // los :: se llaman scope resolution operator
{
    cout<<"estoy durmiendo";
}

void Persona::dormir()
{
    cout << "estoy durmiendo";
}

void Persona::setName(string name)
{
    nombre = name;
}
void Persona::setAltura(int height)
{
    altura = height;
}
void Persona::setPeso(int weight)
{
    peso = weight;
}

string Persona::getNombre()
{
    return nombre;
}
int Persona::getPeso()
{
    return peso;
}
int Persona::getAltura()
{
    return altura;
}