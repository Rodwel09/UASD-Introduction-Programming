// Escribir un programa que simule una maquina de venta de bebidas.

// Por Rodwel Polanco Martinez - 100500328

// Lista de bebidas debe estar visible en consola --> Listo
// El usuario puede salir del programa o elegir una bebida --> Listo
// Si el usuario selecciona una bebida.
// Intoduce el monto de dinero que es introducido ---> Listo
// El programa deberia desplegar el cambio de ser devuelto al usuario --> Listo
// Dismuir la cantidad de bebida seleccionada. --> Listo
// Si la cantidad es 0, entonces imprimir al usuario no se puede --> Listo
// Al final debe desplegarse el monto total en dinero que la maquina a ganado --> Listo

#include <vector>
#include <iostream>
#include <ctype.h>
#include <limits>

struct Machine
{
    double drinkPrice; // Precio de bebida
    int amountInMachine;
    std::string drinkName; // Nombre de bebida
};

// Global values
struct Machine machine;
struct Machine machine1;
struct Machine machine2;
struct Machine machine3;
struct Machine machine4;

// Funcion que introduce los values to structs
void AddProductsOnMachine()
{
    machine.drinkName = "Botella de agua";
    machine.drinkPrice = 20.00;
    machine.amountInMachine = 20;

    machine1.drinkName = "Coca cola";
    machine1.drinkPrice = 25.00;
    machine1.amountInMachine = 20;

    machine2.drinkName = "Seven up";
    machine2.drinkPrice = 25.00;
    machine2.amountInMachine = 25.00;

    machine3.drinkName = "Montain Dew";
    machine3.drinkPrice = 30.00;
    machine3.amountInMachine = 20;

    machine4.drinkName = "Jugo V8";
    machine4.drinkPrice = 50.00;
    machine4.amountInMachine = 20;
}

//Proceso de pago.
int PayProcess(Machine mach, double amount)
{
    if (mach.drinkPrice <= amount)
    {
        mach.amountInMachine--;
        return amount - mach.drinkPrice;
    }
    else
    {
        std::cout << "El pago no puede ser ejecutado. Por falta de dinero del usuario" << std::endl;
        return 0;
    }
}

int main()
{
    int idUserSelection = 0;
    double userMoneyAmount = 0;
    double returnMoneyAmount = 0;
    double earningsAmount = 0;

    std::vector<Machine> my_vector;

    AddProductsOnMachine();

    // Add data on vector
    my_vector.push_back(machine);
    my_vector.push_back(machine1);
    my_vector.push_back(machine2);
    my_vector.push_back(machine3);
    my_vector.push_back(machine4);

    bool endProgram = false;
    char decision;
    char ignore;

    while (!endProgram)
    {
        for (int i = 0; i < my_vector.size(); i++)
        {
            std::cout << "ID de la bebida " << i + 1 << std::endl;
            std::cout << "Nombre de la bebida: " << my_vector[i - 1].drinkName << std::endl;
            std::cout << "Precio de la bebida: " << my_vector[i - 1].drinkPrice << std::endl;
            std::cout << "Cantidad de bebida " << my_vector[i - 1].amountInMachine << std::endl;
            std::cout << "-------------------------------------------->" << std::endl;
        }

        std::cout << "Quiere continuar ? Y/N" << std::endl;
        std::cin >> decision;
        if (decision == 'N')
        {
            std::cout << "Las ganancias de esta maquina " << earningsAmount << std::endl;
            return 0;
        }
        
        std::cin.ignore();

        std::cout << "Seleccione la bebida con el ID presentado en la lista " << std::endl;
        std::cin >> idUserSelection;

        switch (idUserSelection)
        {
        case 1:
            std::cout << "Intoduzca cantidad de dinero a la maquina " << std::endl;
            std::cin >> userMoneyAmount;
            returnMoneyAmount = PayProcess(machine, userMoneyAmount);
            earningsAmount += machine.drinkPrice;
            std::cout << "Aqui esta la devuelta del usuario: " << returnMoneyAmount << std::endl;
            break;
        case 2:
            std::cout << "Intoduzca cantidad de dinero a la maquina " << std::endl;
            std::cin >> userMoneyAmount;
            returnMoneyAmount = PayProcess(machine1, userMoneyAmount);
            earningsAmount += machine1.drinkPrice;
            std::cout << "Aqui esta la devuelta del usuario: " << returnMoneyAmount << std::endl;
            break;
        case 3:
            std::cout << "Intoduzca cantidad de dinero a la maquina " << std::endl;
            std::cin >> userMoneyAmount;
            returnMoneyAmount = PayProcess(machine2, userMoneyAmount);
            earningsAmount += machine2.drinkPrice;
            std::cout << "Aqui esta la devuelta del usuario: " << returnMoneyAmount << std::endl;
            break;
        case 4:
            std::cout << "Intoduzca cantidad de dinero a la maquina " << std::endl;
            std::cin >> userMoneyAmount;
            returnMoneyAmount = PayProcess(machine3, userMoneyAmount);
            earningsAmount += machine3.drinkPrice;
            std::cout << "Aqui esta la devuelta del usuario: " << returnMoneyAmount << std::endl;
            break;
        case 5:
            std::cout << "Intoduzca cantidad de dinero a la maquina " << std::endl;
            std::cin >> userMoneyAmount;
            returnMoneyAmount = PayProcess(machine4, userMoneyAmount);
            earningsAmount += machine4.drinkPrice;
            std::cout << "Aqui esta la devuelta del usuario: " << returnMoneyAmount << std::endl;
            break;
        default:
            std::cout << "El valor no machea con ninguno de los ID de la maquina " << std::endl;
        }
        
        std::cout << "Pressione cualquier tecla para seguir.." << std::endl;
        getchar();
    }
}