#pragma once
#include <iostream>
#include <Integrales.hpp>
using namespace std;

class CondicionesIniciales
{
public:
    float
        LSuperior,
        LInferior,
        Intervalos,
        h,
        Contador,
        Solucion,
        Sumatoria,
        CantidadX;

    int j;

public:
    CondicionesIniciales() {}

    void Reiniciar()
    {
        LSuperior = 0;
        LInferior = 0;
        Intervalos = 0;
        h = 0;
        Contador = 0;
        Solucion = 0;
        Sumatoria = 0;
        CantidadX = 0;
        j = 0;
    }

    void Getdatos()
    {
        //	Condiciones iniciales
        system("cls");
        cout << ("\nIntroduce el limite superior:");
        cin >> LSuperior;
        system("cls");

        do
        {
            j = 1;
            cout << ("\nIntroduce el limite inferior:");
            cin >> LInferior;
            ;
            if (LInferior >= LSuperior)
            {
                j = 0;
            }
            else
            {
            }
            system("cls");
            cout << "(El limite inferior no puede ser mayor que el superior o menor que 0)";
        } while (j == 0);
        system("cls");
        cout << ("\nIntroduce el numero de intervalos:");
        cin >> Intervalos;
        system("cls");
    }
    ~CondicionesIniciales() {}
};
