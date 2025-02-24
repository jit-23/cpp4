/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 00:48:48 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/24 18:41:50 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"


int main()
{
	Animal *j = new Cat();
	std::cout << j->get_type() << std::endl;
	j->makeSound(); //will output the cat sound!
	return 0;
}
