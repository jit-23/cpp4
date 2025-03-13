/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:54:53 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/03/11 16:20:15 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Brain* Animal::get_brain()  const
{
    return (NULL);    
}

/* constructor */
Animal::Animal(){
    std::cout << "Animal Default constructor" << std::endl;
    this->type = "animal";
}
void Animal::makeSound() {std::cout << "animal dont speak!" << std::endl;}

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

/* setter */

void Animal::set_type(std::string _type)
{
    type = _type;
}

/* getter */
std::string Animal::get_type() const
{
    return (type);
}
//void Animal::set_type(std::string)
