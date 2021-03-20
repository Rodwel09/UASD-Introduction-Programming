#include <iostream>

class Factorial
{
public:
    int printFactorial(int number, int sequence = 1)
    {
        if (number == 0)
            return sequence;
        sequence *= number;
        std::cout << sequence << std::endl;
        return printFactorial(number - 1, sequence);
    }
};