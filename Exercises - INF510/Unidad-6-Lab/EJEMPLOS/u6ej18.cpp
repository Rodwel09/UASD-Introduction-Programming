#include <iostream>

using namespace std;
// Programa que crea un array de numeros y imprime las direcciones y numeros del array, y compara dos numeros en el array
// Rodwel Polanco Martinez -- 100500328

int main(int argc, char** argv)
{
    int numeros[] = {10, 80, 30, 40, 50}; // Declaracion del array

    for (int i = 0; i < 5; i++)
    {
        cout << "Address (" << (numeros + i) << ") - " << i << " : "
             << *(numeros + i) << endl; // Impresion de las direcciones y el valor del array
    }

    cout << "Es mayor? " << ((numeros + 1) > (numeros + 3)) << endl; // Determina si dos valores del array es mayor que el otro.

    return 0;
}
