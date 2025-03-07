/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 22:03:22 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/03/07 18:35:03 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <cstring>

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

    virtual void    set_type(std::string _type);
    /* getter */
    virtual std::string    get_type();
    virtual void makeSound();

    //void announce()
};


#endif