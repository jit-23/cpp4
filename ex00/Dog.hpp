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
#endif
