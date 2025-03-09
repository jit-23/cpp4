/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:08:40 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/03/09 19:54:32 by fde-jesu         ###   ########.fr       */
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
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    virtual  ~Cat();

    /* setter */
    //void set_type(std::string _type)  ;
    /* getter */
   // std::string get_type()  ;

    /* funct */
    void makeSound();

};
#endif