#include "Dog.hpp"


/* fuct */
void Dog::makeSound() {std::cout << "RUF RUF" << std::endl;}

Brain* Dog::get_brain()  const
{
    return (_brain);    
}
void Dog::set_brain(Dog &other) 
{
    delete _brain;
    this->_brain = new Brain(*other.get_brain());
}

/* constructors */
Dog::Dog() : Animal(){
    _brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
    set_type("Dog");
}

Dog::Dog(Dog &other) : Animal(other) {
    _brain  = new Brain(*other._brain);
    std::cout << "Dog copy constructor called" << std::endl;
    set_type(other.get_type());
}

Dog& Dog::operator=(Dog &other) 
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        delete _brain;
        _brain = new Brain(*other._brain);
        set_type(other.get_type());
    }
    return (*this);
}

/* destructor */
Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog Default destructor called" << std::endl;
}

/* setter */
