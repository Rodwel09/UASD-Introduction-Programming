#include <iostream>
#include <string>

struct Invoice
{
    long factID;
    double factNet;
    double factAmount;
    double factDiscount;
    std::string factDate;
    std::string factClient;
};

int main()
{
    struct Invoice inv1;
    std::cout << "Introduzca el numero de la factura " << std::endl;
    std::cin >> inv1.factID;
    std::cin.ignore();
    std::cout << "Introduzca el nombre del cliente " << std::endl;
    std::getline(std::cin, inv1.factClient);
    std::cout << "Introduzca el monto de la factura " << std::endl;
    std::cin >> inv1.factAmount;
    std::cin.ignore();
    std::cout << "Introduzca la fecha de la factura " << std::endl;
    std::getline(std::cin, inv1.factDate);

    if (inv1.factAmount >= 20000 && inv1.factAmount < 30000) inv1.factDiscount = inv1.factAmount * 0.07;
    if (inv1.factAmount >= 30000 && inv1.factAmount < 50000) inv1.factDiscount = inv1.factAmount * 0.1;
    if (inv1.factAmount >= 50000) inv1.factDiscount = inv1.factAmount * 0.14;
    if (inv1.factAmount < 2000) inv1.factDiscount = 0;

    inv1.factNet = inv1.factAmount - inv1.factDiscount;

    std::cout << "El valor neto de la factura es " << inv1.factNet << std::endl;

    return 0;
}