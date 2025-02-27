/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 00:48:48 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/27 15:26:26 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <cstdio>
int main()
{
	Animal* j[10];
	for (int i = 0; i < 5; i++)
		j[i] = new Cat();
	for (int i = 0; i < 5; i++)
		j[i] = new Dog();	
	
	//
	//j[2]->makeSound();
	//j[7]->makeSound();
	std::cout << "lol" << std::endl;
	printf("%p\n", j[3]->get_brain());
	//std::cout << "j[3]->get_brain() - " << * << std::endl;
	std::cout << "lol" << std::endl;
	
	for (int i = 0; i < 10; i++)
		delete j[i];
	
	
	return 0;
}
/* mete as functions the set e get ideas no animal (cat dog, assim e mais facil lidar com eles) */