#include <iostream>
/*
Programa que introduzca datos a una matriz 2x2 y luego buscar la determinante.

Realizado por Rodwel Polanco Martinez - 100500328. 
Fecha: 5/11/2021
*/

int main()
{
    int val;

    int firstValue;
    int secondValue;

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

    // Calculo de la determinante.
    firstValue = myMatrix[0][0] * myMatrix[1][1];
    secondValue = myMatrix[0][1] * myMatrix[1][0];

    std::cout << "El valor de la determinante es: " << firstValue - secondValue << std::endl;
}