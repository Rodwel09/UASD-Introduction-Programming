#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Programa que toma los valores de un array los introduce en un puntero (array) y imprime sus valores.
// Rodwel Polanco Martinez - 100500328

// Prototipos de funciones
double * redim(double[], int, int);
void print(double *, int);

int main(int argc, char** argv)
{
    double arreglo[] = {23, 45, 98, 78, 69}; // Declaracion del arreglo

    double * arr = redim(arreglo, 5, 5); // Llamada al funcion redim
    print(arr, 10); // Llamada a la funcion print

    return 0;
}

double * redim(double arr[], int len, int more)
{
    double * new_array = new double[len + more]; // Declaracion del puntero y assignacion de valor

    for (int i = 0; i < len; i++)
        new_array[i] = arr[i]; // Asigna en el puntero array, los valores del array en el parametro.

    for (int i = len + 1; i < more; i++)
        new_array[i] = 0; // Asigna 0 los valores del array

    return new_array; // Retorna el array
}

void print(double * arr, int len)
{
    /*
    for (int i = 0; i < len; i++)
    {
        cout << i << ": " << arr[i] << endl;
    }*/

    for (int i = 0; i < len; i++)
    {
        //cout << "i: " << *arr++ << endl;
        cout << i << ": " << *(arr + i) << " ==> ";
        cout << (arr + i) << endl; // Imprime los valores del array.
    }
}
