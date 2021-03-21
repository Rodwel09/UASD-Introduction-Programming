#include "Grandpa.h"

class Father : public Grandpa{
    public:
        std::string fatherVar = "Padre";
        void fatherMethod(){
            std::cout << "Variable Abuelo: " << grandpaVar << std::endl;
            std::cout << "Variable Padre: " << fatherVar << std::endl;
        }
};