#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>
#include <cctype>
#include "Brain.hpp"

/* em cat.hpp tenho que ter todas as funcoes que animal tem para que funcione */

class Animal
{
protected:
    std::string type ;
public:
    Animal() ;
    Animal( Animal &other) ;
    Animal& operator=(const Animal& other) ;
    virtual ~Animal() ;
    virtual Brain *get_brain() const ;
    /* setter */
    virtual void    set_type(std::string _type) ;
    /* getter */
    virtual std::string    get_type() const ;
    virtual void makeSound() const = 0;

    //void announce()
};


#endif