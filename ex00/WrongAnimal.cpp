#include "WrongAnimal.hpp"

/* constructor */
WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Default constructor" << std::endl;
    this->type = "Wronganimal";
}


WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << "WrongAnimal copy destructor" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}
/* destructor */
WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal Default destructor" << std::endl;}


void WrongAnimal::makeSound() {std::cout << "Wronganimal dont speak!" << std::endl;}


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

