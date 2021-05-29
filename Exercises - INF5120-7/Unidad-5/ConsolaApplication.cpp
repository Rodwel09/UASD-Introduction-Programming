#include <iostream>


int main(){

    std::string name;
    std::string age;
    std::string address;

    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    std::cout << "Where you live?" << std::endl;
    std::cin >> address;

    std::cout << "Hello " << name << " thousands of people live in " << address << " and millons have that " << age << " what do you think of that" << std::endl;
    
    return 0;
}