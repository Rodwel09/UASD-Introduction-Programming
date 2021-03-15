#include "Class/Suma.h"

int main(){
    int num1;
    int num2;

    std::cout << "Introduce el primer numero: " << std::endl;
    std::cin >> num1;

    std::cout << "Introduce el segundo numero " << std::endl;
    std::cin >> num2;

    Suma sum = Suma(num1, num2);

    std::cout << "El resultado de la suma " << sum.returnSum() << std::endl;
}