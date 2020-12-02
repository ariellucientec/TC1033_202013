#include"Maquinaria.h"

#pragma once
class RelojMecanico
{
protected:  //privado para el mundo, pero público para sus hijos
    Maquinaria variableMaquinaria;

public:
    RelojMecanico();
    void setMaquinaria(Maquinaria laMaquinaria);
    Maquinaria getMaquinaria();
};