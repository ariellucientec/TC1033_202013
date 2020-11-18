#include<iostream>
using namespace std;

/*  FUNCIONES Y APUNTADORES

    a) Los arreglos se pasan por dirección (hay otras formas, pero sólo veremos esta)
    b) Siempre hay que pasar el tamaño del arreglo, junto con el arreglo
*/

void imprimeArregloEnteros(int* arreglo, int size)
{
    for(int i=0; i<size; i++)
        cout << arreglo[i] << " ";
    cout << endl;
}

void imprimeArregloCaracteres(char* arreglo, int size)
{
    for(int i=0; i<size;i++)
        cout << arreglo[i] << " ";
    cout << endl;
}

/* Arreglos con apuntadores

    1.  Declarar el apuntador
    2.  Reservar memoria (número de espacios del arreglo)
    2.1 Guardar el tamaño del arreglo
    3.  Manipular el arreglo
    4.  Liberar memoria del apuntador

*/

int main()
{
    // 1. Declarar el apuntador
    int* arregloEnteros;        //Declarar el apuntador. Puede apuntar a un valor único o un conjunto de valores
    char* arregloCaracteres;    //Declarar el apuntador a un caracter o a un conjunto de caracteres

    // 2. Reservar memoria dinámica para los apuntadores y guardar su tamaño
    int sizeArregloEnteros = 10;
    int sizeArregloCaracteres = 10;
    arregloEnteros = new int[10];       //reservo 10 espacios para almacenar números enteros
    arregloCaracteres = new char[10];   //reservo 10 espacios para almacenar 10 caracteres diferentes

    // 3. Manipular el arreglo
    
    // asignar valores a cada elemento del arreglo. El de enteros tendrán valores del 1 al 10 
    for(int i=0; i<sizeArregloEnteros; i++)
        arregloEnteros[i] = i + 1;

    /* Se agregarán valores al arreglo de caracteres (letras de la a a la j)
    Se puede hacer referencia a un caracter a través de un número entero. Cada caracter tiene asociado un número entero (ver tabla de código ASCII)*/
    int caracterInicial = 97;  // es caracter 97 es la letra a minúscula
    for(int i=0; i<sizeArregloCaracteres; i++)
        arregloCaracteres[i] = caracterInicial++; //ya que asigné una letra, cambio el valor de caracterIncial con un ++

    imprimeArregloEnteros(arregloEnteros, sizeArregloEnteros);
    imprimeArregloCaracteres(arregloCaracteres, sizeArregloCaracteres);



}