#include <iostream>

using namespace std;

/*
    Programa que determina el numero mayor en un array, con limitante.

    Rodwel Polanco Martinez - 100500328.
*/

// Declaracion de la funcion "mayor"
int mayor(int[], int);

int main(int argc, char** argv)
{
    /*************************************************************
     * Tres tipos de arreglos para ser vistos en esta asignatura *
     *
     * Arreglos definidos en tiempo de compilacion
     * Arreglos definidos en tiempo de ejecucion
     * Vectores
     *************************************************************/

    // Declaracion de variables
    const int SIZE = 5; // Limite de valores que el array puede contener
    int numeros[SIZE] = {34, 23, 33, 66, 45 };

    // Imprime el retorno de la funcion "mayor"
    cout << "El mayor es " << mayor(numeros, SIZE) << endl;

    return 0; // Retorna el numero 0
}

// Inicio de la funcion mayor
int mayor(int x[], int s)
{
    int m = x[0];

    // Inicio del for-loop
    for (int i = 0; i < s; i++)
    {
        // Condicion determina cual de todos los numeros es el mayor.
        if (x[i] > m) 
            m = x[i]; // Si se cumple guarda el valor en una variable
    }

    return m; // Retorna la variable
}
