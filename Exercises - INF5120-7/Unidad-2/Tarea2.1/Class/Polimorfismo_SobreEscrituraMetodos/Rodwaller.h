#include "Dog.h"

class Rodwaller : public Dog{
    public:
        void Bark() override{
            std::cout << "A rodwaller is barking" << std::endl;
        }
        void printName(std::string name){
            std::cout << "Hello, I'am " << name << " and I'am a Rodwaller." << std::endl;
        }
};