#include<string>
using namespace std;

#pragma once
class PadreDeRelojs
{
protected:
    string marca;
    string modelo;
    int diametro; 

public:
    void setMarca(string laMarca);
    void setModelo(string elModelo);
    void setDiametro(int elDiametro);

    string getMarca();
    string getModelo();
    int getDiametro();
};