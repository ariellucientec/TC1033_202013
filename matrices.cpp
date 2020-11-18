#include<iostream>
using namespace std;

/*
    Matrices y funciones

    Las matrices se pasan por dirección, pero ahora es necesario enviar dos direcciones (renglones y columnas)
*/

void printMatrizLetras(char** matriz, int nrows, int ncols)
{
    for(int row=0; row < nrows; row++)
    {
        for(int col = 0; col < ncols; col++)
        {
            cout << matriz[row][col] << " ";
        }
        cout << endl;
    }
}


/* MATRICES

    Las matrices se pueden expresar como Arreglos de Arreglos. Son bidimensionales (renglones y columnas)

*/

int main()
{
    // Declaración de una matriz
    char** matrizDeLetras;  // nota que hay 2 asterícos -uno para renglones y otro para columnas-

    // Reserva de memoria (reservaremos una matriz de 10 x 10 elementos)
    int nrenglones = 10;
    int ncolumnas = 10;
    matrizDeLetras = new char*[nrenglones];  //aquí se reservan los renglones
    for(int i=0; i<nrenglones;i++)
        matrizDeLetras[i] = new char[ncolumnas];  //en cada renglón reservamos cuántas columnas habrá

    // Manipular la matriz
    // vamos a llenar la matriz de letras del abecedario iniciando con el símbolo de admiración (!) representado por el 33
    int letras = 33;  //letra a minúscula
    for(int row=0; row< nrenglones; row++)
    {
        for(int col=0; col<ncolumnas; col++)
        {
            matrizDeLetras[row][col] = letras++;  //observa cómo para acceder utilizamos los corchetes. El primero indica renglón y el segundo columna
        }
    }

    //ahora vamos a imprimir la matriz con la función
    printMatrizLetras(matrizDeLetras, nrenglones, ncolumnas);

}