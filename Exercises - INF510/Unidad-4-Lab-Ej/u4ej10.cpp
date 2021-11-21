#include <iostream>

using namespace std;
/*
    Programa que usa una lista de edades, para imprimir y sacar el promedio de estos.

    Rodwel Polanco Martinez - 100500328
*/
int main(int argc, char** argv)
{
    const int SIZE = 5;

    // Declarando e inicializando el arreglo con valores
    int edades[SIZE] = {23, 34, 55, 25, 58};
    double sumatoria = 0;

    /*
     * Asignando los valores de cada elemento de forma manual
    edades[0] = 23;
    edades[1] = 34;
    edades[2] = 55;
    edades[3] = 25;
    edades[4] = 58;
    */

    
    for (int i = 0; i < SIZE; i++) // Ciclo que recorre hasta llegar a la constante SIZE
    {
        cout << "Elemento " << i << ": " << edades[i] << endl; // Acumula los elementos como sumatoria de edades.
        sumatoria += edades[i];
    }

    cout << "Edad Promedio es " << sumatoria / SIZE << endl; // Imprime el promedio de la sumatoria 

    return 0;
}
