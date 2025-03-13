/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:08:40 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/03/11 15:51:19 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
    Brain *_brain;
public:
    Cat();
    Cat( Cat &other);
    Cat& operator=(const Cat &other);
    virtual  ~Cat();

    /* setter */
    //void set_type(std::string _type)  ;
    /* getter */
   // std::string get_type()  ;

    /* funct */
    Brain *get_brain() const;
    void set_brain(Cat &other) ;
    
    void makeSound();

};


#endif