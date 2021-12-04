#include <iostream>

using namespace std;

// Programa que imprime y declara cual es menor o mayor entre dos punteros
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    const unsigned int SIZE = 5; // Declara la constante
    short numeros[SIZE] = {31, 19, 14, 74, 9}; // Declaracion de lista de numeros.
    short *numerosPtr = numeros; // Asignacion de lista a un puntero.

    short *punteroA = numerosPtr + 1; // Declaracion y asignacion de valor a puntero. (Tomando un puntero + 1)
    short *punteroB = numerosPtr + 4; // Declaracion y asignacion de valor a puntero. (Tomando un puntero + 4)

    // Impresion de la direccion en memoria de dos punteros.
    cout << "Direccion punteroA: " << punteroA << endl; 
    cout << "Direccion punteroB: " << punteroB << endl;
    cout << endl;

    // Comparacion de los dos punteros determinando si es mayor, igual o menor que otro.
    if (punteroA > punteroB) 
        cout << "punteroA es MAYOR que punteroB";
    else if (punteroA == punteroB)
        cout << "puntero es IGUAL que punteroB";
    else
        cout << "punteroA es MENOR que punteroB";

    cout << endl;

    return 0;
}
