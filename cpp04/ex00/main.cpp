/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:01:00 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 00:48:49 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

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

	const WrongAnimal*	meta2 = new WrongAnimal();
	const WrongAnimal*	j2 = new WrongDog();
	const WrongAnimal*	i2 = new WrongCat();

	std::cout << j2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will output the cat sound!
	j2->makeSound();
	meta2->makeSound();
	delete meta2;
	delete j2;
	delete i2;
	return (0);
}
