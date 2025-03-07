/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:55:25 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/03/07 19:11:59 by fde-jesu         ###   ########.fr       */
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
    std::string type ;
public:
    Animal() ;
    Animal( Animal &other) ;
    Animal& operator=(const Animal& other) ;
    virtual ~Animal() ;
    
    virtual Brain *get_brain() = 0;
    /* setter */

    virtual void    set_type(std::string _type) = 0;
    /* getter */
    virtual std::string    get_type() = 0;
    virtual void makeSound() = 0;

    //void announce()
};


#endif