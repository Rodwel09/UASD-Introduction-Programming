#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Programa que inicializa un array de punteros donde se asigna el tamaño random y imprime los valores de este
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    srand(time(0)); // Inicializa numeros random

    int tamano = rand() % 21 + 10; // Imprime un numero random del 0 al 20
    cout << "Tamano del arreglo: " << tamano << endl << endl;

    int * arreglo = new int[tamano]; // Declaracion y designacion del puntero con un array fixed

    cout << "Imprimiendo el arreglo\n";
    for (int i = 0; i < tamano; i++)
    {
        cout << i << ": " << arreglo[i] << endl; // Imprime cada elemento del array
    }

    return 0;
}
