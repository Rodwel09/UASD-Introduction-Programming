#include <iostream>


int main(){
    int age;
    std::cout << "Introduzca un su edad" << std::endl;
    std::cin >> age;
    try
    {
        if (age >= 18)
            std::cout << "Access Granted -- you're old enough." << std::endl;
        else{
            throw (age);
        }
    }
    catch(int myNum)
    {
        std::cout << "Access Denied" << std::endl;
    }
    
}