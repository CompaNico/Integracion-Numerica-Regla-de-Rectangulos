#pragma once
#include <iostream>
#include <math.h>
class Calculos
{
public:
protected:
    float Resultado;

public:
    Calculos() {}
    ~Calculos() {}

    float Integral(float LF)
    {
        //	Elejir una funcion a evaluar
        Resultado = sqrt(1 - (cos(LF)));
        return Resultado;
    }
    
    float CalcularHyX1(float LF, float LS, float Diferencial)
    {
        Resultado = (LS - LF) / Diferencial;
        return Resultado;
    }
};