#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>
using namespace std;

// ANTES DE CORRER EL PROGRAMA ELIJE O FORMULA TU INTEGRAL, POR DEFALT sqrt(1-(cos(f)))

class GetDatos
{
public:
    float LSuperior = 0, LInferior = 0, Intervalos = 0, h = 0, Contador = 0, Solucion = 0, Sumatoria = 0, CantidadX = 0, Y = 0;

public:
    float Integral(float LF, float Y);
};
int main(int argc, char const *argv[])
{
    GetDatos dato;
    int i, j, E = 0;
    //	Condiciones iniciales

    do
    {
        E = 1;
        cout << ("\nIntroduce el limite superior:");
        cin >> dato.LSuperior;
        system("cls");

        do
        {
            j = 1;
            cout << ("\nIntroduce el limite inferior:");
            cin >> dato.LInferior;
            ;
            if (dato.LInferior >= dato.LSuperior)
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
        cin >> dato.Intervalos;
        system("cls");

        //	Calculo de H y Cantidad de X0,X1,X2,etc.
        dato.h = (dato.LSuperior - dato.LInferior) / dato.Intervalos;
        dato.CantidadX = (dato.LSuperior - dato.LInferior) / dato.h;

        //	Calculo de la integral
        for (i = 0; i < dato.CantidadX - 1; i++)
        {
            dato.LInferior = dato.LInferior + dato.h;
            cout << "X" << i + 1 << "=" << dato.LInferior;
            dato.Contador = dato.Integral(dato.LInferior, dato.Y);
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

float GetDatos::Integral(float LF, float Y)
{
    //	Elejir una funcion a evaluar
    //	Y=sqrt(1-(cos(LF)));
    Y = pow(271828, (-pow(LF, 2)) / 2);
    //	Y=;
    //	Y=;
    return Y;
}