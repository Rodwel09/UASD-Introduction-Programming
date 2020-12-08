#include <iostream>
#include <vector>

/*

    Ordena una serie de numeros de forma ascendente o descendente.
    Creado por: 
    Rodwel Polanco Martinez - 100500328
*/

std::vector<int> descendingOrder(std::vector<int> numbers)
{
    return numbers;
}

std::vector<int> ascendingOrder(std::vector<int> numbers)
{
    int pivot = numbers.size() / 2;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > numbers[pivot])
        {
            int temp = numbers[i]; // variable temporal
            numbers[i] = numbers[pivot];
            numbers[pivot] = temp;
        }

        pivot--;
    }
    return numbers;
}

int main()
{
    std::vector<int> allNumbers;
    std::vector<int> newNumbers;

    int amountToIntroduce;
    char decision;

    std::cout << "Cuantos numeros introducira ?" << std::endl;
    std::cin >> amountToIntroduce;

    for (int i = 0; i < amountToIntroduce; i++)
    {
        int numberToIntroduce;
        std::cout << "Introduzca el numero #" << i + 1 << std::endl;
        std::cin >> numberToIntroduce;

        allNumbers.push_back(numberToIntroduce);
    }
    
    std::cout << "Como quiere ordernar los numeros? Ascendente: A Descendente: D" << std::endl;
    std::cin >> decision;

    switch (decision)
    {
    case 'D':
        newNumbers = descendingOrder(allNumbers);
        break;
    case 'A':
        newNumbers = ascendingOrder(allNumbers);
        break;
    }

    for (int i = 0; i < newNumbers.size(); i++)
    {
        std::cout << newNumbers[i] << std::endl;
    }
    
}