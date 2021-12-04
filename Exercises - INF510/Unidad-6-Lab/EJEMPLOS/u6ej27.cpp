#include <iostream>

using namespace std;

// Programa que imprime una lista de numeros con su direccion en memoria en reversa y normal usando punteros
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    const unsigned int SIZE = 5; // Declaracion de constantes
    short numeros[SIZE] = {31, 19, 14, 74, 9}; // Declaracion de lista numeros
    short * numerosPtr = numeros; // Asignacion de lista de numeros a puntero

    cout << "Imprimiendo arreglo del primero al ultimo\n";
    int indice = 0;
    while (indice < SIZE)
    {
        cout << "[" << indice << "] (" << numerosPtr
             << "): " << *numerosPtr << endl; // Imprime el contenido de la lista del primero al ultimo (Normal)
        indice++;
        numerosPtr++;
    }

    cout << "\nImprimiendo arreglo del ultimo al primero\n";
    indice = SIZE - 1;
    numerosPtr--;
    while (indice >= 0)
    {
        cout << "[" << indice << "] (" << numerosPtr
             << "): " << *numerosPtr << endl; // Imprime el contenido de la lista al del ultimo al primero (Al reves)
        indice--;
        numerosPtr--;
    }

    return 0;
}
