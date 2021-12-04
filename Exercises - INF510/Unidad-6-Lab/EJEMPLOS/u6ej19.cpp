#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Programa que imprime una cantidad introducida por el usuario de numeros
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    int *numeros; // Declaracion del puntero
    int cantidad; // Declaracion de variable

    do
    {
        cout << "Cuantos numeros? ";
        cin >> cantidad; // Introduce la cantidad de numeros por el usuario
        if (cantidad == 0) break;
    } while (cantidad < 0);

    numeros = new int[cantidad]; // Asigna un array al puntero

    srand(time(0));
    for (int i = 0; i < cantidad; i++)
    {
        *(numeros + i) = rand() % 100 + 1; // Asigna numeros random en el array de puntero
    }

    cout << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << numeros[i] << endl; // Imprime todos los numeros del puntero
    }

    // Limpia de memoria.
    delete [] numeros;
    numeros = NULL;

    return 0;
}
