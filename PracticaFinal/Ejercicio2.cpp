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

std::vector<int> ascendingOrder(std::vector<int> numbers, int lastPosition, int index = 0)
{
    int pivot = numbers[numbers.size() / 2];

    if (numbers[index] > numbers[pivot])
    {
        int temp = numbers[index]; // variable temporal
        numbers[index] = numbers[lastPosition];
        numbers[lastPosition] = temp;
    }

    if (numbers[lastPosition] < numbers[pivot])
    {
        int temp = numbers[lastPosition]; // variable temporal
        numbers[lastPosition] = numbers[index];
        numbers[index] = temp;
    }

    if (lastPosition == 0) return numbers;
    
    return ascendingOrder(numbers, lastPosition - 1, index + 1);
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
        newNumbers = ascendingOrder(allNumbers, allNumbers.size() - 1);
        break;
    }

    for (int i = 0; i < newNumbers.size(); i++)
    {
        std::cout << newNumbers[i] << std::endl;
    }
    
}