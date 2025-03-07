#include "WrongAnimal.hpp"

/* destructor */
WrongAnimal::WrongAnimal() {std::cout << "WrongAnimal Default constructor" << std::endl;}
WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal Default destructor" << std::endl;}

WrongAnimal::WrongAnimal(WrongAnimal &other) {

    std::cout << "WrongAnimal copy destructor" << std::endl;

    *this = other;
}


void WrongAnimal::makeSound() {std::cout << "Wronganimal dont speak!" << std::endl;}


/* setter */

void WrongAnimal::set_type(std::string _type)
{
    type = _type;
}

/* getter */
std::string WrongAnimal::get_type()
{
    return (type);
}
//void WrongAnimal::set_type(std::string)


WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}