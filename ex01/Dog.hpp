#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_brain;
public:
    Dog();
    Dog( Dog &other);
    Dog& operator=(const Dog &other);
    virtual  ~Dog();

    /* setter */
    //void set_type(std::string _type)  ;
    /* getter */
   // std::string get_type()  ;

    /* funct */
    Brain *get_brain() const;
    void set_brain(Dog &other) ;
    
    void makeSound();

};
#endif