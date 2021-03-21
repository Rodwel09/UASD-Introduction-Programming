#include <iostream>

class Grandpa{
    public:
        std::string grandpaVar = "Abuelo";
        void grandPaMethod(){
            std::cout << "Variable Abuelo: " << grandpaVar << std::endl;
        }
};