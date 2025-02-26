/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 22:03:22 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/25 00:31:13 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <cstring>
#include <cctype>

class WrongAnimal
{
private:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal( WrongAnimal &other);

    WrongAnimal& operator=(const WrongAnimal& other);
    virtual ~WrongAnimal();

    /* setter */

    void    set_type(std::string _type);
    /* getter */
    std::string    get_type();
    virtual void makeSound();

    //void announce()
};

/* constructor */
WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Default constructor" << std::endl;
    this->type = "Wronganimal";
}


WrongAnimal::WrongAnimal(WrongAnimal &other) {
    std::cout << "WrongAnimal copy destructor" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}
/* destructor */
WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal Default destructor" << std::endl;}


void WrongAnimal::makeSound() {std::cout << "Wronganimal dont speak!" << std::endl;}


/* setter */

void WrongAnimal::set_type(std::string _type)
{
    type = _type;
}

/* getter */
std::string WrongAnimal::get_type()
{
    return (type);
}
//void WrongAnimal::set_type(std::string)

#endif