#include "Animal.hpp"


Brain* Animal::get_brain() 
{
    return (NULL);    
}

/* constructor */
Animal::Animal(){
    std::cout << "Animal Default constructor" << std::endl;
    this->type = "animal";
}
void Animal::makeSound() {std::cout << "animal dont speak!" << std::endl;}

Animal::Animal(Animal &other) {
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




/* setter */

void Animal::set_type(std::string _type)
{
    type = _type;
}

/* getter */
std::string Animal::get_type()
{
    return (type);
}
//void Animal::set_type(std::string)
