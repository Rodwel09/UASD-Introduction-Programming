#include <iostream>

class NumPrimClass
{
public:
    void printCousinNumber()
    {
        std::cout << "Todos los numeros de 1 al 100" << std::endl;
        for (int num = 1; num <= 100; num++)
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
};