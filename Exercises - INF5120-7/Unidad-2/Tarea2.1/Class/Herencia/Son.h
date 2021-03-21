#include "Father.h"

class Son : public Father {
    public:
        std::string sonVar = "Hijo";
        void sonMethod(){
            std::cout << "Variable Abuelo: " << grandpaVar << std::endl;
            fatherMethod();
        }
};