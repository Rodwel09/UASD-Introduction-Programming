#include <iostream>

/*
    Mostrar la tablas de multiplicacion 1 al 12. 
    
    Creado por:

    Rodwel Polanco Martinez - 10050328
*/


int main(){
    int numeroAIntroducir;

    std::cout << "Digite que tabla quiere que le muestre:" << std::endl;
    std::cin >> numeroAIntroducir;

    std::cout << "Impresion de la tabla del " << numeroAIntroducir << std::endl;

    for (int i = 1; i <= 12; i++)
    {
        std::cout << numeroAIntroducir * i << std::endl; 
    }
    
    return 0;
}