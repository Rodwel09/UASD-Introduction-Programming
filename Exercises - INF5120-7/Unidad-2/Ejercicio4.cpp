#include "Class/EmployeeClass.h"

int main(){
    std::string userName;
    int userId;
    int hoursSalary;
    int amountHours;

    std::cout << "Introduzca el nombre del empleado: " << std::endl;
    std::cin >> userName;

    std::cout << "Introduzca la cedula del empleado: " << std::endl;
    std::cin >> userId;

    std::cout << "Introduzca las salario por hora: " << std::endl;
    std::cin >> hoursSalary;

    std::cout << "Introduzca las horas trabajadas: " << std::endl;
    std::cin >> amountHours;

    EmployeeClass employee = EmployeeClass(userName, userId, amountHours, hoursSalary);

    employee.printCountryID();
    employee.printName();
    employee.printBruteSalary();
}   