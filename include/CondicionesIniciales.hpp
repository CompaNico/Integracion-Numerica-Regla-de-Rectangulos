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
        Intervalos;

    int j;

public:
    CondicionesIniciales() {}

    void Reiniciar()
    {
        LSuperior = 0;
        LInferior = 0;
        Intervalos = 0;
        j = 0;
    }

    void Getdatos()
    {
        Reiniciar();
        
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
