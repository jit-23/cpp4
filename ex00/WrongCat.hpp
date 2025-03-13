
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat();
    WrongCat(const  WrongCat &other);
    WrongCat& operator=(const WrongCat &other);
 	~WrongCat();

    /* setter */
    //void set_type(std::string _type);
    /* getter */
   // std::string get_type()  ;

    /* funct */
    void makeSound();

};


#endif