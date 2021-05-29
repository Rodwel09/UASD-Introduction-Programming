#include <iostream>

class OverloadClass
{
public:
    double a, b;

    OverloadClass(const double a, const double b)
    {
        this->a = a;
        this->b = b;
    }
};

OverloadClass &operator+(const OverloadClass &p1, const OverloadClass &p2)
{
    return *(new OverloadClass(p1.a + p2.a, p1.b + p2.b));
}