#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>
#include <CondicionesIniciales.hpp>
#include <Calculos.hpp>
#include <Resultados.hpp>
#include <Integrales.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    CondicionesIniciales dato;
    Calculos FX;
    Resultados RE;
    
    int i, j, E = 0;
    do
    {
        // Reinicio de ciclo
        E = 1;
        // Pedir datos
        dato.Getdatos();

        // Integracion numerica
        RE.h = FX.CalcularHyX1(dato.LInferior, dato.LSuperior, dato.Intervalos);
        RE.CantidadX = FX.CalcularHyX1(dato.LInferior, dato.LSuperior, RE.h);
        RE.Resultado = FX.IntegracionNumerica(dato.LInferior, RE.h, RE.CantidadX);

        // Imprimir Resultados finales
        RE.ImprimirResultados(FX.Sumatoria);

        // Preguntamos por otra evaluacion
        cout << "\nQuieres volver a evaluar la Integral Si(0) No(/=0)::";
        cin >> E;
        system("cls");
    } while (E == 0);

    return 0;
}