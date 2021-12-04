#include <iostream>

using namespace std;

// Programa que toma un lista que esta asignada a un puntero y imprime el contenido de la lista. El tamaño de la lista es introducido por el usuario.
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    int cantidad; // Declaracion de variable
    int * arreglo; // Declaracion de puntero

    cout << "Cantidad de elementos: ";
    cin >> cantidad; // Introduce numero por medio de consola
    arreglo = new int[cantidad]; // Asignacion de lista al puntero

    // inicializar cada elemento
    for (int i = 0; i < cantidad; i++)
        *(arreglo + i) = 0; // arreglo[i] = 0;

    // imprimir el arreglo
    for (int i = 0; i < cantidad; i++)
        cout << "[" << i << "]: "
             << *(arreglo + i) << endl; // Imprime todos los valores del puntero.

    delete [] arreglo; // Limpia en memoria
    arreglo = 0; // arreglo = NULL;

    return 0;
}
