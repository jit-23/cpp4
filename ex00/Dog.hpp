#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    
public:
    Dog();
    Dog( const Dog &other);
    Dog& operator=(const Dog &other);
    virtual  ~Dog();

    /* setter */
    //void set_type(std::string _type)  ;
    /* getter */
   // std::string get_type()  ;

    /* funct */
    void makeSound()const;

};
#endif
