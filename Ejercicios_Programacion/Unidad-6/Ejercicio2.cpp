#include <iostream>

/*
    Crear una funcion que pueda redimensionar un arreglo.

    Por:
        Rodwel Polanco Martinez - 100500328
*/

void transformArray(int[], int, int);

int main()
{
    int sizeArray;
    int newSize;

    int numbersArray[5] = {1,6,9,8,7};

    std::cout << "Introduce new size of the array: " << std::endl;
    std::cin >> newSize;

    transformArray(numbersArray, 5, newSize);
}

void transformArray(int array[], int size, int newSize){
    int *numberCopy = array;
    if (newSize > size)
    {
        for (int i = size; i < newSize; i++)
        {
            *(numberCopy + i) = 0;
        }
    }
    if (newSize < size)
    {
        for (int i = 0; i < newSize; i++)
        {
            *(numberCopy + i) = array[i];
        }
    }
    
    std::cout << "All element of the array: " << std::endl;

    for (int i = 0; i < newSize; i++)
    {
        std::cout << *(numberCopy + i) << std::endl;
    }
    
}