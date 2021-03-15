#include "Class/Factorial.h"

int main(){
    Factorial fact = Factorial();
    
    int num;

    std::cout << "Introduce el numero para la series de factoriales: " << std::endl;
    std::cin >> num;

    std::cout << "Serie de factoriales: " << std::endl;
    fact.printFactorial(num);
}