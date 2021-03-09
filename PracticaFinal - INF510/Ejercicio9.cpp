#include <iostream>

/*
    Mostrar el cuadrado
    Es par o impar
    Es positivo o negativo
    Primo o no primo
    Factorial
    
    Creado por:

    Rodwel Polanco Martinez - 10050328
*/

int factorial(int number, int sequence = 1)
{
    if (number == 0)
        return sequence;
    sequence *= number;
    return factorial(number - 1, sequence);
}

int main()
{
    int numero;

    std::cout << "Introduzca el numero: " << std::endl;
    std::cin >> numero;

    std::cout << "Cuadrado del numero: " << numero * numero << std::endl;
    std::cout << "El factorial del numero es " << factorial(numero) << std::endl;

    if (numero < 0)
    {
        std::cout << "El numero es negativo" << std::endl;
    }
    else
    {
        std::cout << "El numero es positivo" << std::endl;
    }

    if (numero % 2 == 0)
    {
        std::cout << "El numero es par" << std::endl;
    }
    else
    {
        std::cout << "El numero es impar" << std::endl;
    }

    bool isPrime = true;
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            isPrime = false;
        }
    }

    if (isPrime)
    {
        std::cout << "El numero es primo" << std::endl;
    }
    else
    {
        std::cout << "El numero no es primo" << std::endl;
    }
}