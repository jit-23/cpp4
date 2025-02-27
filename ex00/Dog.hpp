#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    
public:
    Dog();
    Dog( Dog &other);
    Dog& operator=(Dog &other);
    virtual  ~Dog();

    /* setter */
    //void set_type(std::string _type)  ;
    /* getter */
   // std::string get_type()  ;

    /* funct */
    void makeSound();

};

/* fuct */
void Dog::makeSound() {std::cout << "RUF RUF" << std::endl;}

/* constructors */
Dog::Dog() : Animal(){
    std::cout << "Dog Default constructor called" << std::endl;
    set_type("Dog");
}

Dog::Dog(Dog &other) : Animal( other) {
    std::cout << "Dog copy constructor called" << std::endl;
    set_type(other.get_type());
}

Dog& Dog::operator=(Dog &other) 
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
#endif