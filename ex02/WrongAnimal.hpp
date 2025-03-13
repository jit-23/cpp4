/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 22:03:22 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/03/11 15:53:03 by fde-jesu         ###   ########.fr       */
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
    std::string    get_type()const;
    virtual void makeSound()const ;

    //void announce()
};


#endif