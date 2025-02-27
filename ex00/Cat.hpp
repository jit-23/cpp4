/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:08:40 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/27 01:14:14 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"

class Cat : public Animal
{
private:
    
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
    void makeSound();

};

/* fuct */
void Cat::makeSound() {std::cout << "Miawwwwwwww" << std::endl;}

/* constructors */
Cat::Cat() : Animal(){
    std::cout << "Cat Default constructor called" << std::endl;
    set_type("Cat");
}

Cat::Cat(Cat &other) : Animal( other) {
    std::cout << "Cat copy constructor called" << std::endl;
    set_type(other.get_type());
}

Cat& Cat::operator=(Cat &other) 
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        set_type(other.get_type());
    }
    return (*this);
}

/* destructor */
Cat::~Cat()
{
    std::cout << "Cat Default destructor called" << std::endl;
}

/* setter */

#endif