#include "Class/Herencia/Son.h"

int main()
{
    // Setting the instances
    Grandpa grandpa;
    Father father;
    Son son;

    // Father class can call his methods and the Grandpa methods
    std::cout << "Metodos en la clase Father " << std::endl;
    father.grandPaMethod();
    father.fatherMethod();

    // Grandpa class can only access his methods. Because he doesn't inheritance from nobody.
    std::cout << "Metodos en la clase GrandPa " << std::endl;
    grandpa.grandPaMethod();

    // Son class can access he's methods, Father class methods and Grandpa methods.
    std::cout << "Metodos en la clase Hijo " << std::endl;
    son.sonMethod();
    son.fatherMethod();
    son.grandPaMethod();
}
