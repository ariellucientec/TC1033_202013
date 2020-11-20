#include<string>
#include<iostream>

using namespace std;

#pragma once    //a cada clase agregarle un pragma once
class Persona
{

// CONSTRCUTOR
public:
    Persona();
    Persona(string name, int altura, int peso);

//Atributos
// Los atributos pueden ser clases o tipos de datos nativos
// Las clases definen TIPOS DE DATOS definidos por el usuario
private:
    int altura;
    int peso;
    string nombre;    // caracteres -> arreglo de caracteres
    string password;

//métodos
public:
    void comer();  //Firma del método comer
    void dormir();  //firma del método dormir


// Definir métodos que devuelvan los valores de los atributos de una clase GETTER's (pueden ser públicos o privados)
// los getters siempre devuelven algo
public:
    string getNombre();  //string es UNA CLASE y también UN TIPO DE DATOS
    int getPeso();
    int getAltura();

private: 
    string getPassword();


// Definir métodos que me permitan modificar los valores de los atributos SETTER's (deden ser privados de manera general)
// los setters nunca devuelven nada
private:
    void setName(string name);
    void setAltura(int altura);
    void setPeso(int peso);


/* IDENTIFICADORES DE ACCESO 

Permiten definir quién tiene acceso a modificar o a leer mis atributos

Hay 3 modificadores de ACCESO

1) PUBLIC  (puede ver y modificar valores)
2) PRIVATE (todo es privado por default) (nadie puede ver o modificar valores)
3) PROTECTED *

*/

/*  CONSTRUCTOR

Método con características particulares
  A) Se ejecuta automáticamente cuando se crea la instancia del objeto
  b) si no lo defines / declaras, entonces se declara automáticamente
  c) se debe llamar exatamente igual que la clase
  d) puede o no puede tener parámetros
  e) casi siempre es público
  f) no tienen valor ni tipo de retorno
  d) puede haber varios constructores (nunca puede haber dos con los mismos parámetros)



*/
};


