/*
  Programa que retorna la posicion de un numero que se encuentra en la sucession fibonacci
  Creado por: Rodwel Polanco Martinez - 100500328
*/

#include <iostream>

int fibonacci(int searchTerm, int position = 0, int inicial1 = 0, int inicial2 = 1){
    int sequence = inicial1 + inicial2;
    if (sequence >= searchTerm) return position;
    return fibonacci(searchTerm, position + 1, inicial2, sequence);
}

int main(){
    long amount = fibonacci(21);
    std::cout << "Cantidad: " << amount << std::endl;
}