#include <iostream>

using namespace std;

// Programa que muestra la diferencia de modificar el contenido de la direccion en memoria. 
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    char letra = 'M';
    char vocal = 'A';
    char * const ptrChr = &letra;

    /**
     El puntero puede modificar el contenido
     de la direccion de memoria que el apunta
    */
    *ptrChr = 'Z'; // Correcto!

    /**
     El puntero NO puede apuntar a otra direccion
     de memoria, su valor no puede ser cambiado
    */
    ptrChr = &vocal; // Error!!!
    return 0;
}
