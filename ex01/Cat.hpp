/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:08:40 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/27 15:21:10 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
    Brain *_brain;
public:
    Cat();
    Cat( Cat &other);
    Cat& operator=(Cat &other);
    virtual  ~Cat();

    /* setter */
    //void set_type(std::string _type)  ;
    /* getter */
   // std::string get_type()  ;

    /* funct */
    Brain *get_brain() ;
    void makeSound();

};

/* fuct */
void Cat::makeSound() {std::cout << "Miawwwwwwww" << std::endl;}

Brain* Cat::get_brain() 
{
    return (_brain);    
}


/* constructors */
Cat::Cat() : Animal(){
    _brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
    set_type("Cat");
}

Cat::Cat(Cat &other) : Animal(other) {
    _brain = other._brain;
    std::cout << "Cat copy constructor called" << std::endl;
    set_type(other.get_type());
}

Cat& Cat::operator=(Cat &other) 
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_brain = other._brain;
        set_type(other.get_type());
    }
    return (*this);
}

/* destructor */
Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat Default destructor called" << std::endl;
}

/* setter */