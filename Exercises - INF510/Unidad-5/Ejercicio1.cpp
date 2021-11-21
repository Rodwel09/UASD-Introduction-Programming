/*
  Programa que retorna la posicion de un numero que se encuentra en la sucession fibonacci

  Creado por: Rodwel Polanco Martinez - 100500328
*/

#include <iostream>

// Inicio de la funcion de fibonacci
int fibonacci(int searchTerm, int position = 0, int inicial1 = 0, int inicial2 = 1){
    int sequence = inicial1 + inicial2;
    if (sequence >= searchTerm) return position; // Si sequence variable es mayor o igual que la variable searchTerm retorna el valor de position
    return fibonacci(searchTerm, position + 1, inicial2, sequence); // Retorno de la funcion fibonacci de forma recursiva.
}

int main(){
    // Declaracion de la variable
    long amount = fibonacci(21); // Llamada de la funcion fibonnacci

    std::cout << "Cantidad: " << amount << std::endl; // Imprime el valor final.
}