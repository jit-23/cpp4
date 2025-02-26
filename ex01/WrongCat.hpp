
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat();
    WrongCat( WrongCat &other);
    WrongCat& operator=(WrongCat &other);
    virtual  ~WrongCat();

    /* setter */
    //void set_type(std::string _type);
    /* getter */
   // std::string get_type()  ;

    /* funct */
    virtual void makeSound();

};

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

WrongCat& WrongCat::operator=(WrongCat &other) 
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

#endif