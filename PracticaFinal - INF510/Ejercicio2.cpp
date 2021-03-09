#include <iostream>
#include <vector>

/*

    Ordena una serie de numeros de forma ascendente o descendente.
    Creado por: 
    Rodwel Polanco Martinez - 100500328
*/

std::vector<int> numbers;

void descendingOrder()
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int indice = 0; numbers.size(); indice++)
        {
            if (numbers[indice] < numbers[indice + 1])
            {
                temp = numbers[indice];
                numbers[indice] = numbers[indice + 1];
                numbers[indice + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

void ascendingOrder()
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int indice = 0; numbers.size(); indice++)
        {
            if (numbers[indice] > numbers[indice + 1])
            {
                temp = numbers[indice];
                numbers[indice] = numbers[indice + 1];
                numbers[indice + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

int main()
{
    int amountToIntroduce;
    char decision;

    std::cout << "Cuantos numeros introducira ?" << std::endl;
    std::cin >> amountToIntroduce;

    for (int i = 0; i < amountToIntroduce; i++)
    {
        int numberToIntroduce;
        std::cout << "Introduzca el numero #" << i + 1 << std::endl;
        std::cin >> numberToIntroduce;

        numbers.push_back(numberToIntroduce);
    }
    
    std::cout << "Como quiere ordernar los numeros? Ascendente: A Descendente: D" << std::endl;
    std::cin >> decision;

    switch (decision)
    {
    case 'D':
        descendingOrder();
        break;
    case 'A':
        ascendingOrder();
        break;
    }

    for (int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << std::endl;
    }
    
}