#include <iostream>

int main()
{
    std::cout << "Todos los numeros de 30 al 300" << std::endl;
    for (int num = 30; num <= 300; num++)
    {
        bool isPrime = true;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime)
        {
            std::cout << num << std::endl;
        }
    }
}