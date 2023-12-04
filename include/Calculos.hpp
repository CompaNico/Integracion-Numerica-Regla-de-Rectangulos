#pragma once
#include <iostream>
#include <math.h>
class Calculos
{
public:
    float Sumatoria;

protected:
    float Resultado, Contador;

public:
    Calculos() {}
    ~Calculos() {}

    float Integra(float LF)
    {
        //	Elejir una funcion a evaluar
        Resultado = sqrt(1 - (cos(LF)));
        return Resultado;
    }

    float CalcularHyX1(float LF, float LS, float Diferencial)
    {
        //	Calculo de H y Cantidad de X0,X1,X2,etc.
        Resultado = (LS - LF) / Diferencial;
        return Resultado;
    }

    float IntegracionNumerica(float LF, float H, float X1)
    {
        Reiniciar();
        //	Calculo de la integral
        for (int i = 0; i < X1 - 1; i++)
        {
            LF = LF + H;
            cout << "X" << i + 1 << "=" << LF;
            Contador = Integra(LF);
            Sumatoria = Sumatoria + Contador;
            cout << "\nF(x" << i + 1 << ")=" << Contador << "\n\n";
        }

        //	Formula de integracion numerica I=Suma F(x)
        Resultado = H * Sumatoria;
        return Resultado;
    }
    void Reiniciar()
    {
        Sumatoria = 0;
        Contador = 0;
        Resultado = 0;
    }
};