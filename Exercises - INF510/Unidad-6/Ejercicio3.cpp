#include <iostream>

/*
    En estadística la moda de un conjunto de valores es el valor que más
    frecuentemente ocurre o aparece en dicho conjunto, es decir, es el valor de mayor
    frecuencia. Escriba una función que acepte los siguientes argumentos:
    a) Un arreglo de enteros
    b) Un entero que indique la cantidad de elementos que tiene el arreglo 
*/

int ManageList(int[], int);
//void RecursionWay(int[], int, int);

int main(){
    int dataInt[] = {4,4,4,5,5,5,6,6,6};
    int modaNumber = ManageList(dataInt, sizeof(dataInt) / sizeof(dataInt[0]));
    std::cout << "El numero con mayor encontrado con mayor frecuencia en el arreglo es: " << modaNumber << std::endl;
    return 0;
}

int ManageList(int list[], int size)
{
    int *listOfNumbers = list;

    int lastNumberOfRepetitions = 0;
    int popularNumber = 0;

    for (int i = 0; i < size; i++)
    {
        int numberOfRepetitions = 0;
        int numberToSearch = *(listOfNumbers + i); // Toma el primer elemento como referencia
        for (int j = 0; j < size; j++)
        {
            if (numberToSearch == *(listOfNumbers + j))
            {
                numberOfRepetitions += 1;
            }
        }
        if (numberOfRepetitions > lastNumberOfRepetitions)
        {
            lastNumberOfRepetitions = numberOfRepetitions;
            popularNumber = numberToSearch;
        }
        if (numberOfRepetitions > size / 2)
        {
//            delete listOfNumbers;
            return popularNumber; // Una vez el numero de repeticiones es mayor que la cantidad de numeros en el arreglo, entonces unanimamente el numero es el mas repetitivo.
        }
        
    }
    return popularNumber;    
    delete[] listOfNumbers; // Release memory data.
}