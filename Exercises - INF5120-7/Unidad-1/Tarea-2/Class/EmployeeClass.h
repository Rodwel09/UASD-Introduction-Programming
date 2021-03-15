#include <iostream>

class EmployeeClass{
    private:
        std::string name;
        int countryId;
        int workHours;
        int payHours;
    public: 
        EmployeeClass(std::string userName, int userCountryID, int userWorkHours, int userPayHours){
            name = userName;
            countryId = userCountryID;
            workHours = userWorkHours;
            payHours = userPayHours;
        }
        void printName(){
            std::cout << "Nombre del empleado: " << name << std::endl;
        }
        void printCountryID(){
            std::cout << "La cedula del empleado: " << countryId << std::endl;
        }
        void printBruteSalary(){
            std::cout << "Salario Bruto del empleado: " << workHours * payHours << std::endl;
        }
};