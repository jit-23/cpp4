#include "Cat.hpp"


void Cat::makeSound() {std::cout << "Miawwwwwwww" << std::endl;}

Brain* Cat::get_brain() const 
{
    return (_brain);    
}
void Cat::set_brain(Cat &other) 
{
	delete _brain;
	this->_brain = new Brain(*other.get_brain());
}

/* constructors */
Cat::Cat() : Animal(){
    _brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
    set_type("Cat");
}

Cat::Cat(Cat &other) : Animal(other) {
    _brain  = new Brain(*other._brain);
    std::cout << "Cat copy constructor called" << std::endl;
    set_type(other.get_type());
}

Cat& Cat::operator=(Cat &other) 
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        delete _brain;
        _brain = new Brain(*other._brain);
        set_type(other.get_type());
    }
    return (*this);
}

/* destructor */
Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat Default destructor called" << std::endl;
}

/* setter */