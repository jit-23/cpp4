/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:55:25 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/27 15:21:18 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>
#include <cctype>
#include "Brain.hpp"
class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal( Animal &other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();
    
    virtual Brain *get_brain() ;
    /* setter */

    void    set_type(std::string _type);
    /* getter */
    std::string    get_type();
    virtual void makeSound();

    //void announce()
};


Brain* Animal::get_brain() 
{
    return (NULL);    
}

/* constructor */
Animal::Animal(){
    std::cout << "Animal Default constructor" << std::endl;
    this->type = "animal";
}


Animal::Animal(Animal &other) {
    std::cout << "Animal copy destructor" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}
/* destructor */
Animal::~Animal() {std::cout << "Animal Default destructor" << std::endl;}


void Animal::makeSound() {std::cout << "animal dont speak!" << std::endl;}


/* setter */

void Animal::set_type(std::string _type)
{
    type = _type;
}

/* getter */
std::string Animal::get_type()
{
    return (type);
}
//void Animal::set_type(std::string)

#endif