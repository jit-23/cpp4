#include "WrongCat.hpp"

/* fuct */
void WrongCat::makeSound() {std::cout << "WrongCat sound" << std::endl;}

/* constructors */
WrongCat::WrongCat() : WrongAnimal(){
    std::cout << "WrongCat Default constructor called" << std::endl;
    set_type("WrongCat");
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal( other) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    set_type(other.get_type());
}

WrongCat& WrongCat::operator=(const WrongCat &other) 
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &other)
    {
        set_type(other.get_type());
    }
    return (*this);
}

/* destructor */
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Default destructor called" << std::endl;
}

/* setter */
