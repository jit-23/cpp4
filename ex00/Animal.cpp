#include "Animal.hpp"

/* constructor */
Animal::Animal(){
    std::cout << "Animal Default constructor" << std::endl;
    this->type = "animal";
}


Animal::Animal(const Animal &other) {
    std::cout << "Animal copy destructor" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}
/* destructor */
Animal::~Animal() {std::cout << "Animal Default destructor" << std::endl;}


void Animal::makeSound() {std::cout << "animal dont speak!" << std::endl;}


/* setter */

void Animal::set_type(std::string _type)
{
    type = _type;
}

/* getter */
std::string Animal::get_type() const 
{
    return (type);
}
//void Animal::set_type(std::string)



