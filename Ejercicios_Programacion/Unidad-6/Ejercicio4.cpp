#include <iostream>
/*
    Retornar una lista con elementos en reversa.

    Creado por:
        Rodwel Polanco Martinez - 100500328
*/

int *ReverseList(int[], int);

int main(){
    int normalArray[] = {1,2,3,4,5,6,7};
    int sizeOfArray = sizeof(normalArray) / sizeof(normalArray[0]);

    int* reverseListPointer = ReverseList(normalArray, sizeOfArray);

    std::cout << "Desplegar los valores pero en reversa: " << std::endl;

    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout << *(reverseListPointer + i) << std::endl;
    }
    
    delete reverseListPointer;
    return 0;
}

int *ReverseList(int list[], int size)
{
    int *firstPosition = list;
    int *lastPosition = list + size - 1;

    while(firstPosition < lastPosition){
        int temp = *firstPosition;
        *firstPosition = *lastPosition;
        *lastPosition = temp;

        lastPosition--;
        firstPosition++;
    }

    return list;
}