#include "Class/AgeClass.h"


int main(){

    int userAge;

    std::cout << "Introduce tu edad: " << std::endl;
    std::cin >> userAge;

    AgeClass ageinstance = AgeClass(userAge);

    std::cout << "Edad introducida: " << ageinstance.returnAge() << std::endl;
}