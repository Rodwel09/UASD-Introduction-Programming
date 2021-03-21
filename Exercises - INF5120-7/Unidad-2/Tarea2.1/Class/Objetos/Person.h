#include <iostream>

class Person{
    private:
        std::string name;
        std::string age;
    
    public:
        void SetName(std::string userName){
            name = userName;
        }
        void SetAge(std::string userAge){
            age = userAge;
        }
        void FullInfo(){
            std::cout << "Su nombre es: " << name << " y su edad es: " << age << std::endl;
        }
};