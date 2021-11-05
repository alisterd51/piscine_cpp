/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:01:00 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 17:39:12 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal*	meta1 = new Animal();
	const Animal*	j1 = new Dog();
	const Animal*	i1 = new Cat();

	std::cout << j1->getType() << " " << std::endl;
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound(); //will output the cat sound!
	j1->makeSound();
	meta1->makeSound();
	delete meta1;
	delete j1;
	delete i1;
	return (0);
}
