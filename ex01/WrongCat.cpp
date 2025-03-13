
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
/* fuct */
void WrongCat::makeSound() {std::cout << "WrongCat sound" << std::endl;}

/* constructors */
WrongCat::WrongCat() : WrongAnimal(){
    std::cout << "WrongCat Default constructor called" << std::endl;
    set_type("WrongCat");
}


WrongCat::WrongCat(WrongCat &other) : WrongAnimal( other) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    set_type(other.get_type());
}

WrongCat& WrongCat::operator=(const WrongCat &other) 
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &other)
    {
		delete _brain;
        _brain  = new Brain(*other._brain);
        set_type(other.get_type());
    }
    return (*this);
}

void WrongCat::set_brain(WrongCat &other) 
{
	delete _brain;
	this->_brain = new Brain(*other.get_brain());
}

/* destructor */
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Default destructor called" << std::endl;
}

Brain* WrongCat::get_brain() const
{
    return (_brain);    
}

/* setter */