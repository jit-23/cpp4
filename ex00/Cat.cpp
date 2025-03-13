#include "Cat.hpp"


/* fuct */
void Cat::makeSound() const{std::cout << "Miawwwwwwww" << std::endl;}

/* constructors */
Cat::Cat() : Animal(){
    std::cout << "Cat Default constructor called" << std::endl;
    set_type("Cat");
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
    set_type(other.get_type());
}

Cat& Cat::operator=(const Cat &other) 
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        set_type(other.get_type());
    }
    return (*this);
}

/* destructor */
Cat::~Cat()
{
    std::cout << "Cat Default destructor called" << std::endl;
}

/* setter */

