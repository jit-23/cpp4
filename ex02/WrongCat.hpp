
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	Brain *_brain;
public:
    WrongCat();
    WrongCat( WrongCat &other);
    WrongCat& operator=(const WrongCat &other);
    virtual  ~WrongCat();

    /* setter */
    //void set_type(std::string _type);
    /* getter */
   // std::string get_type()  ;

    /* funct */
    virtual void makeSound()const ;
	Brain* get_brain()const;
    void set_brain(WrongCat &other) ;
};

#endif