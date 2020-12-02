#include"Microcomputadora.h"

#pragma once
class Smartwatch
{
protected:
    Microcomputadora microcomputadora;

public:
    Smartwatch();
    void setMicrocomputadora(Microcomputadora laMicrocomputadora);
    Microcomputadora getMicrocomputadora();
};