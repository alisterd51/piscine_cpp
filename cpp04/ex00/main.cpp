/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:01:00 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 06:17:00 by anclarma         ###   ########.fr       */
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
	std::cout << "-----------------------------------------------" << std::endl;
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
	}
	std::cout << "-----------------------------------------------" << std::endl;
	{
		const WrongAnimal*	meta2 = new WrongAnimal();
		const WrongAnimal*	j2 = new WrongDog();
		const WrongAnimal*	i2 = new WrongCat();

		std::cout << j2->getType() << " " << std::endl;
		std::cout << i2->getType() << " " << std::endl;
		i2->makeSound(); //will output the wrongcat sound!
		j2->makeSound();
		meta2->makeSound();
		delete meta2;
		delete j2;
		delete i2;
	}
	std::cout << "-----------------------------------------------" << std::endl;
	{
		const Cat*	cat = new Cat();
		const Cat*	catBis = new Cat(*cat);
		const Dog*	dog = new Dog();
		const Dog*	dogBis = new Dog(*dog);

		std::cout << cat->getType() << " " << std::endl;
		std::cout << catBis->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << dogBis->getType() << " " << std::endl;
		delete cat;
		delete catBis;
		delete dog;
		delete dogBis;
	}
	std::cout << "-----------------------------------------------" << std::endl;
	{
		const Cat*	wrongCat = new Cat();
		const Cat*	wrongCatBis = new Cat(*wrongCat);
		const Dog*	wrongDog = new Dog();
		const Dog*	wrongDogBis = new Dog(*wrongDog);

		std::cout << wrongCat->getType() << " " << std::endl;
		std::cout << wrongCatBis->getType() << " " << std::endl;
		std::cout << wrongDog->getType() << " " << std::endl;
		std::cout << wrongDogBis->getType() << " " << std::endl;
		delete wrongCat;
		delete wrongCatBis;
		delete wrongDog;
		delete wrongDogBis;
	}
	std::cout << "-----------------------------------------------" << std::endl;
	return (0);
}
