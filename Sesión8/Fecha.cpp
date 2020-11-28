#include"Fecha.h"

Fecha::Fecha()
{
    cout << "Costruyendo por default una fecha" << endl;
    dia = 1;
    mes = 1;
    anio = 1980;
}

Fecha::Fecha(int elDia, int elMes, int elAnio)
{
    cout << "Costruyendo con parámetros una fecha" << endl;
    dia = elDia;
    mes = elMes;
    anio = elAnio;
}

void Fecha::presentacion()
{
    cout << dia <<"/"<<mes<<"/"<<anio<<endl;
}

int Fecha::getDia()
{
    return dia;
}
int Fecha::getMes()
{
    return mes;
}
int Fecha::getAnio()
{
    return anio;
}