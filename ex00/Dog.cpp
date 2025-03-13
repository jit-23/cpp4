#include "Dog.hpp"
/* fuct */
void Dog::makeSound() const{std::cout << "RUF RUF" << std::endl;}

/* constructors */
Dog::Dog() : Animal(){
    std::cout << "Dog Default constructor called" << std::endl;
    set_type("Dog");
}

Dog::Dog(const Dog &other) : Animal( other) {
    std::cout << "Dog copy constructor called" << std::endl;
    set_type(other.get_type());
}

Dog& Dog::operator=(const Dog &other) 
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        set_type(other.get_type());
    }
    return (*this);
}

/* destructor */
Dog::~Dog()
{
    std::cout << "Dog Default destructor called" << std::endl;
}

/* setter */