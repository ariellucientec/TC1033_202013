#include"Maquinaria.h"
#include"PadreDeRelojs.h"

#pragma once
class RelojMecanico : public PadreDeRelojs
{
protected:  //privado para el mundo, pero público para sus hijos
    Maquinaria variableMaquinaria;

public:
    RelojMecanico();
    void setMaquinaria(Maquinaria laMaquinaria);
    Maquinaria getMaquinaria();
};