#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>
#include <CondicionesIniciales.hpp>
#include <Calculos.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    CondicionesIniciales dato;
    Calculos FX;
    int i, j, E = 0;
    do
    {
        E = 1;
        dato.Reiniciar();
        dato.Getdatos();
        
        //	Calculo de H y Cantidad de X0,X1,X2,etc.
        dato.h = FX.CalcularHyX1(dato.LInferior, dato.LSuperior, dato.Intervalos);
        dato.CantidadX = FX.CalcularHyX1(dato.LInferior, dato.LSuperior, dato.h);

        //	Calculo de la integral
        for (i = 0; i < dato.CantidadX - 1; i++)
        {
            dato.LInferior = dato.LInferior + dato.h;
            cout << "X" << i + 1 << "=" << dato.LInferior;
            dato.Contador = FX.Integral(dato.LInferior);
            dato.Sumatoria = dato.Sumatoria + dato.Contador;
            cout << "\nF(x" << i + 1 << ")=" << dato.Contador << "\n\n";
        }

        //	Formula de integracion numerica I=Suma F(x)
        dato.Solucion = dato.h * dato.Sumatoria;

        //	Formula de integracion numerica por rectangulos
        cout << "	h=" << dato.h << "\n	Sumatoria=" << dato.Sumatoria << "\n\n	Formula de Integracion numerica:: X=h[(f(x0))+(f(x1))+(f(x2))...{Sumatoria}]";

        //	Resultados de la integral
        cout << "\n\n---------------------------------"
             << "\nResultante de la integral::" << dato.Solucion << "\n----------------------------------\n\n";
        system("pause");
        cout << "\nQuieres volver a evaluar la Integral Si(0) No(1)::";
        cin >> E;
        system("cls");
    } while (E == 0);

    return 0;
}