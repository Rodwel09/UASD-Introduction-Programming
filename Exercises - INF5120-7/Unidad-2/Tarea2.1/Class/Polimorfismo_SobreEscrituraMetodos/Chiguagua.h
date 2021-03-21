#include "Dog.h"

class Chiguagua : public Dog{
    public:
        void Bark() override{
            std::cout << "A chiguagua is barking..." << std::endl;
        }
        void printName(std::string name){
            std::cout << "Hello, I'am " << name << " and I'am a chiguagua." << std::endl;
        }
};