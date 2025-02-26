/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 00:48:48 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/25 00:25:05 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	Animal *j = new Cat();
	Animal *x = new Dog();
	WrongAnimal *a = new WrongCat();
	std::cout << j->get_type() << std::endl;
	std::cout << x->get_type() << std::endl;
	std::cout << a->get_type() << std::endl;
	j->makeSound(); //will output the cat sound!
	x->makeSound();
	a->makeSound();
	delete j;
	delete x;
	delete a;
	
	return 0;
}
