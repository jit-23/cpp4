/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:55:25 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/03/05 22:39:03 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>
#include <cctype>

class Animal
{
private:
    std::string type;
public:
    Animal();
    Animal( Animal &other);

    Animal& operator=(const Animal& other);
    virtual ~Animal();

    /* setter */

    void    set_type(std::string _type);
    /* getter */
    std::string    get_type();
    virtual void makeSound();

    //void announce()
};

#endif