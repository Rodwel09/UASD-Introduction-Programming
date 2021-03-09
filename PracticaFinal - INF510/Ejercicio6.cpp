#include <iostream>

/*
    Calcular el salario semanal de unos empleados a los que se les paga 15 pesos por hora


    Creado por:
    Rodwel Polanco Martinez - 100500328
*/


int main(){
    int hours;
    int decision;

    LOOP:std::cout << "Introduzca las horas del empleado" << std::endl;
    std::cin >> hours;

    if (hours <= 35)
    {
        std::cout << "El salario del empleado segun sus horas es de: " << hours * 15 << std::endl;
        
        std::cout << "Desea continuar introduciendo empleaods Si) 1, No) 2" << std::endl;
        std::cin >> decision;

        if (decision != 1)
        {
            return 0;
        }

        goto LOOP;
    }
    else
    {
        int extras = hours - 35;

        int normalSalary = 15 * 35;
        int extraSalary = 25 * extras;

        std::cout << "El salario del empleado con sus horas extras es de: " << extraSalary + normalSalary << std::endl;

        std::cout << "Desea continuar introduciendo empleaods Si) 1, No) 2" << std::endl;
        std::cin >> decision;

        if (decision != 1)
        {
            return 0;
        }

        goto LOOP;
    }
}
