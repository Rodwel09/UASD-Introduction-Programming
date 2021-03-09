#include <iostream>

/*
    Imprimir el promedio de 10 sueldos

    Creado por:
    Rodwel Polanco Martinez - 100500328
*/


int main(){

    int userNumber;
    int sum = 0;
    int numberOfSalaries = 0;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Ingrese el sueldo de empleado #" << i + 1 << std::endl;
        std::cin >> userNumber;

        if (userNumber > 7000)
        {
            numberOfSalaries += 1;
        }

        sum += userNumber;
    }
    std::cout << "La cantidad de salarios que sobrepasan 7000 pesos es: " << numberOfSalaries << std::endl;
    std::cout << "La suma de todos los salarios es: " << sum << std::endl;
    std::cout << "El promedio del salario de todos los empleados es: " << sum / 10 << std::endl;

    return 0;
}