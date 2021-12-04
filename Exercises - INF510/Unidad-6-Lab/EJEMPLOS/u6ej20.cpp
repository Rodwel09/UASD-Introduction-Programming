#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Programa que imprime cantidad de numeros introducido por el usuario
// Rodwel Polanco Martinez - 1000500328

// Prototipo de funciones.
int getSize();
int * create(int);
void print(int *, int);

int main(int argc, char** argv)
{
    int cantidad = getSize(); // Llamada a la funcion getSize

    if (cantidad > 0) // Si la valor es 0
    {
        int *numeros = create(cantidad); //  Llamada de la funcion create asignada al puntero
        print(numeros, cantidad); // Llamada de la funcion print.
    }

    return 0;
}

int getSize()
{
    int cantidad; // Declaracion de variable

    do
    {
        cout << "Cuantos numeros? ";
        cin >> cantidad; // Introduce el numero en la consola
        if (cantidad == 0) break;
    } while (cantidad < 0);

    return cantidad;
}

int * create(int qty)
{
    int *numeros; // Declara un puntero

    numeros = new int[qty]; // Asigna lista al puntero

    srand(time(0));
    for (int i = 0; i < qty; i++)
    {
        *(numeros + i) = rand() % 100 + 1; // Introduce numeros random en la lista (puntero)
    }

    return numeros; // Retorna el puntero.
}

void print(int *nums, int qty)
{
    cout << endl;
    for (int i = 0; i < qty; i++)
    {
        cout << nums[i] << endl; // Imprime valores de la lista.
    }
}

