#include<iostream>
using namespace std;

#pragma once
class Fecha
{
private:
    int dia;
    int mes;
    int anio;

public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    void presentacion();
    //void setDia(int dia);
    //int getDia();
};