#include<string>
#include<iostream>

using namespace std;

#pragma once    //a cada clase agregarle un pragma once
class Persona
{
//Atributos
// Los atributos pueden ser clases o tipos de datos nativos
// Las clases definen TIPOS DE DATOS definidos por el usuario
int altura;
int peso;
string nombre; 

//métodos

void comer();  //Firma del método comer
void dormir();  //firma del método dormir


// Definir métodos que devuelvan los valores de los atributos de una clase GETTER's
// los getters siempre devuelven algo
string getNombre();
int getPeso();
int getAltura();


// Definir métodos que me permitan modificar los valores de los atributos SETTER's
// los setters nunca devuelven nada
void setName(string name);
void setAltura(int altura);
void setPeso(int peso);

};