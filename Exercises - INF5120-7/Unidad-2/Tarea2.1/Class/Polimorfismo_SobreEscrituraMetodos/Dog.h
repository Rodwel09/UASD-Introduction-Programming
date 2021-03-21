#include <iostream>
#include <list>

#pragma once

class Dog{
    private:
        std::string dogName;
    public:
        void setDogName(std::string name){
            dogName = name;
        }
        virtual void Bark(){
            std::cout << "A dog is barking.." << std::endl;
        }
        void printName(){
            std::cout << "Hello, I'am " << dogName << " and I'am a dog." << std::endl;
        }
};