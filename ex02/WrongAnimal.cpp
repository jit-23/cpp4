#include "WrongAnimal.hpp"

/* destructor */
WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal Default destructor" << std::endl;}

void WrongAnimal::makeSound() const {std::cout << "Wronganimal dont speak!" << std::endl;}

/* setter */

void WrongAnimal::set_type(std::string _type)
{
    type = _type;
}

/* getter */
std::string WrongAnimal::get_type() const
{
    return (type);
}
//void WrongAnimal::set_type(std::string)

