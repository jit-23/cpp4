/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 00:48:48 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/03/13 02:51:15 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
//asd
int main()
{
	{
		Animal *j = new Cat();
		Animal *x = new Dog();
		std::cout << j->get_type() << std::endl;
		std::cout << x->get_type() << std::endl;

		j->makeSound(); //will output the cat sound!
		x->makeSound();
		delete j;
		delete x;
	}
	std::cout << "-------------------" << std::endl;
 	{
		WrongAnimal *j = new WrongCat();
		std::cout << j->get_type() << std::endl;
		j->makeSound(); //will output the cat sound!
		delete j;
	}

	return 0;
}

