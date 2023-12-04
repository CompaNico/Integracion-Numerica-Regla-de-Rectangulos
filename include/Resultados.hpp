#pragma once
#include <iostream>

using namespace std;
class Resultados
{
public:
    float
        h,
        CantidadX,
        Resultado;

public:
    Resultados() {}
    ~Resultados() {}
    void ImprimirResultados(float SUM)
    {
        //	Formula de integracion numerica por rectangulos
        cout << "	h=" << h << "\n	Sumatoria=" << SUM << "\n\n	Formula de Integracion numerica:: X=h[(f(x0))+(f(x1))+(f(x2))...{Sumatoria}]";

        //	Resultados de la integral
        cout << "\n\n---------------------------------"
             << "\nResultante de la integral::" << Resultado << "\n----------------------------------\n\n";
        system("pause");
    }
};