/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 00:48:48 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/03/11 18:09:19 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <cstdio>
int main()
{
	 /* const Animal *animal = new Animal();
	animal->makeSound();
	delete animal; */
	
	Animal* j[10];
	for (int i = 0; i < 5; i++)
		j[i] = new Cat();
	for (int i = 5; i < 10; i++)
		j[i] = new Dog();	
	
	for (int i = 0; i < 100; i++)
		j[0]->get_brain()->set_ideas("animal?");
	for (int i = 0; i < 100; i++)
	{
		std::cout << j[0]->get_brain()->get_ideas(i) << std::endl ;
	}

	for (int i = 0; i < 10; i++)
		delete j[i];
	
	
	return 0;
}