/* 
    Ejercicio con arreglos

    Realizado por: Rodwel Polanco Martinez - 100500328

    1 - Un arreglo de 7 enteros para almacenar ID de empleados.
    2 - Un arreglo de 7 enteros tipo int para almacenar el numero de horas.
    3 - Un arreglo de 7 numeros para almacenar la tarifa por hora de cada empleado.
    4 - Un arreglo de 7 numeros para almacenar el salario bruto que debe ser pagado.
*/

#include <iostream>
#include <vector>

std::vector<long> IdEmpl;

void AddEmployeeID()
{   
    IdEmpl.push_back(5658845);
    IdEmpl.push_back(4520125);
    IdEmpl.push_back(7895122);
    IdEmpl.push_back(8777541);
    IdEmpl.push_back(8451277);
    IdEmpl.push_back(1302850);
    IdEmpl.push_back(7580489);
}


int main()
{
    std::vector<int> hours;
    std::vector<double> fareHours;
    std::vector<double> netSalary;

    int userHours;
    int userTarifs;

    int employeeSalary = 0;

    AddEmployeeID();

    for (int i = 0; i < IdEmpl.size(); i++)
    {
        // El usuario introduce el horario.
        std::cout << "Introduzca la horas del empleado: " << IdEmpl[i] << std::endl;
        std::cin >> userHours;
        if (userHours > 0) { hours.push_back(userHours); }

        // El usuario introduce el horario facturado.
        std::cout << "Introduzca la tarifa en horas del empleado " << IdEmpl[i] << std::endl;
        std::cin >> userTarifs;
        if (userTarifs <= 50.0) { fareHours.push_back(userTarifs); }
        else
        {   
            std::cout << "Error en el sistema la tarifa no puede pasar de 50.00" << std::endl;
            return 0;
        }
        employeeSalary = userHours * userTarifs;
        netSalary.push_back(employeeSalary);
    }

    for (int i = 0; i < netSalary.size(); i++)
    {
        std::cout << "ID: " << IdEmpl[i] << " Salario --> " << netSalary[i] << std::endl;
    }
    return 0;
}