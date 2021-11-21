#include <iostream>
/*
Programa que introduzca datos a una matriz 2x2 y luego buscar la determinante.

Realizado por Rodwel Polanco Martinez - 100500328.
Fecha: 5/11/2021
*/

int main()
{
    int val;

    int firstValue = 1;
    int secondValue = 1;

    int myMatrix[2][2];

    // Inicializacion de la matriz
    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 2; c++)
        {
            std::cout << "Introduzca el valor en matriz " << std::endl;
            std::cin >> val;
            myMatrix[f][c] = val;
        }
    }

    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 2; c++)
        {
            // Calculo de la determinante.
            if (f == c)
            {
                firstValue = firstValue * myMatrix[f][c];   
            }
            else
            {
                secondValue = secondValue * myMatrix[f][c];
            }
        }
    }

    std::cout << "El valor de la determinante es: " << secondValue - firstValue  << std::endl;
}