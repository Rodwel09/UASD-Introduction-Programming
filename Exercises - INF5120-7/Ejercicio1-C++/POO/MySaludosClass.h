#include <iostream>

class Saludos
{

private:
    std::string name;
    std::string sex;
    std::string age;
    std::string carrer;
    std::string salary;
    std::string weight;
    std::string height;
    std::string address;
    std::string schoolId;
    std::string language;
    std::string skinColor;
    std::string type_blood;
    std::string civilStatus;
    std::string nationality;
    std::string phoneNumber;
    std::string nationalityId;
    std::string finantialCategory;

public:
    void printName()
    {
        std::cout << "El nombre registrado es: " << name << std::endl;
    }
    void printSex()
    {
        std::cout << "El sexo registrado es: " << sex << std::endl;
    }
    void printAge()
    {
        std::cout << "El sexo registrado es: " << age << std::endl;
    }

    void printSalary()
    {
        std::cout << "El salario registrado es: " << salary << std::endl;
    }

    void printTypeOfBlood()
    {
        std::cout << "El tipo de sangre registrado es: " << type_blood << std::endl;
    }

    void printWeight()
    {
        std::cout << "El peso registrado es: " << weight << std::endl;
    }

    void printHeight()
    {
        std::cout << "La altura registrado es: " << height << std::endl;
    }

    void printCivilStatus()
    {
        std::cout << "El estatus civil registrado es: " << civilStatus << std::endl;
    }

    void printNationality()
    {
        std::cout << "La nacionalidad registrada es: " << nationality << std::endl;
    }

    void printNationalityID()
    {
        std::cout << "La cedula registrado es: " << nationalityId << std::endl;
    }

    void printPhoneNumber()
    {
        std::cout << "El celular registrado es: " << phoneNumber << std::endl;
    }

    void printAddress()
    {
        std::cout << "El direccion registrado es: " << address << std::endl;
    }

    void printSchoolID()
    {
        std::cout << "La matricula registrado es: " << schoolId << std::endl;
    }

    void printCareer()
    {
        std::cout << "La carrera registrada es: " << carrer << std::endl;
    }

    void printFinantialCategory()
    {
        std::cout << "La categoria financiera registrado es: " << finantialCategory << std::endl;
    }

    void printSkinColor()
    {
        std::cout << "El color de piel registrado es: " << skinColor << std::endl;
    }

    void printLanguage()
    {
        std::cout << "El lenguaje registrado es: " << language << std::endl;
    }

    void IntroduceAllData()
    {
        std::cout << "Introduzca los datos que le preguntan: " << std::endl;

        std::cout << "Introduzca su nombre: " << std::endl;
        std::cin >> name;
        std::cout << "Introduzca su sexo: " << std::endl;
        std::cin >> sex;
        std::cout << "Introduzca su edad: " << std::endl;
        std::cin >> age;
        std::cout << "Introduzca la carrera: " << std::endl;
        std::cin >> carrer;
        std::cout << "Introduzca la salario: " << std::endl;
        std::cin >> salary;
        std::cout << "Introduzca la peso: " << std::endl;
        std::cin >> weight;
        std::cout << "Introduzca la direccion: " << std::endl;
        std::cin >> address;
        std::cout << "Introduzca la altura" << std::endl;
        std::cin >> height;
        std::cout << "Introduzca la matricula: " << std::endl;
        std::cin >> schoolId;
        std::cout << "Introduzca la lenguaje: " << std::endl;
        std::cin >> language;
        std::cout << "Introduzca la color de piel: " << std::endl;
        std::cin >> skinColor;
        std::cout << "Introduzca la tipo de sangre: " << std::endl;
        std::cin >> type_blood;
        std::cout << "Introduzca la estado civil: " << std::endl;
        std::cin >> civilStatus;
        std::cout << "Introduzca la nacionalidad: " << std::endl;
        std::cin >> nationality;
        std::cout << "Introduzca la numero de telefono: " << std::endl;
        std::cin >> phoneNumber;
        std::cout << "Introduzca la cedula de identidad: " << std::endl;
        std::cin >> nationalityId;
        std::cout << "Introduzca la categoria financiera: " << std::endl;
        std::cin >> finantialCategory;
    }
};