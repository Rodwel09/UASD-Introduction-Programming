#include <thread>
#include <iostream>

void sampleFunction(int endCicle){
    for (int i = 0; i < endCicle; i++)
    {
        std::cout << "This is the output of the sample function #1" << std::endl;
    }
}   

void sampleFunction2(int endCicle){
    for (int i = 0; i < endCicle; i++)
    {
        std::cout << "This is the output of the sample function #2" << std::endl;
    }
}

void sampleFunction3(int endCicle){
    for (int i = 0; i < endCicle; i++)
    {
        std::cout << "This is the output of the sample function #3" << std::endl;
    }
}

int main(){
    std::cout << "Como corren los hilos 1, 2, 3" << std::endl;

    std::thread thr1(sampleFunction, 5);
    std::thread thr2(sampleFunction2, 3);
    std::thread thr3(sampleFunction3, 5);

    thr1.join();
    thr2.join();
    thr3.join();

    return 0;
}