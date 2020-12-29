#include <iostream>

/*
    Escribir un programa que asigne dinamicamente un arreglo lo suficientemente
    grande para almacenar un numero de puntuaciones definida por el usuario.

    Rodwel Polanco Martinez - 100500328
*/

double *pointerArray;

double *createPointer(int number);

void sortElements(double *, int);

double promCalculation(double *, int);

int main()
{
    int limitOfArray;
    int numberToIntroduce;

    std::cout << "Introduzca cuantos numeros piensa introducir en la consola: " << std::endl;
    std::cin >> limitOfArray; // Usuario introducira cuantos numero pondra en el array

    pointerArray = new double[limitOfArray];

    sortElements(createPointer(limitOfArray), limitOfArray);

    std::cout << "Desplegando los punteros ordenados..." << std::endl;

    for (int i = 0; i < limitOfArray; i++)
    {
        std::cout << *(pointerArray + i) << std::endl;
    }
    
    std::cout << "El promedio de los numeros es: " << promCalculation(pointerArray, limitOfArray) << std::endl;

    delete pointerArray;
    delete pointerArray;

    return 0;
}

double *createPointer(int limit)
{
    int numberToIntroduce;

    for (int i = 0; i < limit; i++)
    {
        std::cout << "Introuduzca el elemento numero # " << i + 1 << std::endl;
        std::cin >> numberToIntroduce;

        *(pointerArray + i) = numberToIntroduce;
    }

    return pointerArray;
}

void sortElements(double *array, int size)
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int indice = 0; indice < (size - 1); indice++)
        {
            if (array[indice] > array[indice + 1])
            {
                temp = array[indice];
                array[indice] = array[indice + 1];
                array[indice + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

double promCalculation(double *array, int size){
    int sumProm = 0;

    for (int i = 0; i < size; i++)
    {
        sumProm += *(array + i);    
    }
    
    return sumProm / size;
}