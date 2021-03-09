#include <iostream>

int main(){
    std::cout << "Todos los numeros de 50 al 500" << std::endl;
    for (int num = 50; num <= 500; num++)
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