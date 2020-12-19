#include <iostream>

/*
    Haga un programa que calcula los numeros multiplos de 2,3,4,5,6,7,8,9,10 de los valores comprendidos entre 1 y 500.
    Creado por: 
        Rodwel Polanco Martinez - 100500328
*/

int main()
{
    int START_NUMBER = 1;
    int END_NUMBER = 500;

    int multiple = 0;
    std::cout << "Intoduzca un numero del 2 al 10, este va a hacer el multiplo de calcular. " << std::endl;
    std::cin >> multiple;
    if (multiple < 10 && multiple > 2)
    {
        while (START_NUMBER < END_NUMBER)
        {
            if (START_NUMBER % multiple == 0)
            {
                std::cout << START_NUMBER << std::endl;
            }
            START_NUMBER++;
        }
    }
    return 0;
}