/* 
    Ejercicio-3 

    Creado por: Rodwel Polanco Martinez - 100500328
*/

#include <vector>
#include <iostream>

int main()
{
    const int ROWS = 3;
    const int COLUMNS = 7;

    int promLib;

    int data[ROWS][COLUMNS];

    std::vector<int> prom;
    std::vector<int> maxList;
    std::vector<int> minList;

    for (int row = 0; row < ROWS; row++)
    {   
        int foodAmount = 0;
        int sumProm = 0;
        int maxFood = 0;
        int minFood = 9999999;
        for (int column = 0; column < COLUMNS; column++)
        {
            std::cout << "Dia #" << column + 1 << " Introduzca la cantidad de comida del Mono # " << row + 1 << std::endl;
            std::cin >> foodAmount;

            if (foodAmount > maxFood)
            {
                maxFood = foodAmount;
            }

            if (foodAmount < minFood)
            {
                minFood = foodAmount;
            }
            
            if (foodAmount >= 0)
            {
                data[row][column] = foodAmount; // Introduce la cantidad de alimento cada dia
                sumProm += data[row][column];
            }
            else 
            {
                std::cout << "Usuario no puede introducir una cantidad menor a cero." << std::endl;
                return 0;
            }
        }
        prom.push_back(sumProm / 7);
        maxList.push_back(maxFood);
        minList.push_back(minFood);
    }

    for (int i = 0; i < prom.size(); i++)
    {
        std::cout << "Promedio de mono #" << i + 1 << " --->" << prom[i] << std::endl;
        std::cout << "Cantidad mas alta de la semana ----> " << maxList[i] << std::endl;
        std::cout << "Cantidad minima de la semana ---->" << minList[i] << std::endl; 
        std::cout << "---------------------------------->" << std::endl;
    }
    
}