#include <iostream>

using namespace std;

// Programa que recorre una lista de numeros dentro de un puntero, con un ciclo while
// Rodwel Polanco Martinez - 1005000328

int main(int argc, char** argv)
{
    short numeros[] = {31, 19, 14, 74, 9}; // Declaracion de lista de numeros

    /** No se debe utilizar &numeros para
      * asignar la direccion de memoria del
      * arreglo a numerosPtr ya que el nombre
      * del arreglo en si mismo contiene la
      * direccion de memoria en RAM de la primera
      * posicion en el arreglo, el elemento cero
      */
    short *numerosPtr = numeros; // Asignacion de la lista al puntero

    int indice = 0;
    while (indice < 5)
    {
        cout << indice << ": "
             << *(numerosPtr + indice) // Imprime todo el contenido del puntero
             << endl;
        indice++;
    }

    return 0;
}
