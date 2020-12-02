#include"Microcomputadora.h"
#include"PadreDeRelojs.h"

#pragma once
class Smartwatch : public PadreDeRelojs
{
protected:
    Microcomputadora microcomputadora;

public:
    Smartwatch();
    void setMicrocomputadora(Microcomputadora laMicrocomputadora);
    Microcomputadora getMicrocomputadora();
};