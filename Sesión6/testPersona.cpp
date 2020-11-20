#include"Persona.h"

int main()
{
    Persona juanito("juanito", 37, 38);    //crear instancia o crear un objeto
                        // cuando creo el objeto se ejecuta automaticamente el constructor
    cout << juanito.getNombre();    

    Persona pedrito("pedrito", 34,67);
    cout << pedrito.getNombre();
}