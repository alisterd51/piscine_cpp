/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:01:00 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 11:00:32 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "Brain.hpp"

int main()
{
/*	std::cout << "-------------------------------------Test-1----" << std::endl;
	{
		AAnimal	*animals[100];

		for (int i = 0; i < 100; i++)
		{
			if (i % 2)
				animals[i] = new Cat;
			else
				animals[i] = new Dog;
		}
		std::cout << "-------------------------" << std::endl;
		for (int i = 0; i < 100; i++)
			delete animals[i];
		
	}
*/	std::cout << "-------------------------------------Test-2----" << std::endl;
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		
		delete j;//should not create a leak
		delete i;
	}
	std::cout << "-------------------------------------Test-3----" << std::endl;
	{
//		const AAnimal*	meta1 = new AAnimal();
		const AAnimal*	j1 = new Dog();
		const AAnimal*	i1 = new Cat();

//		delete meta1;
		delete j1;
		delete i1;
	}
	std::cout << "-------------------------------------Test-4----" << std::endl;
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
	std::cout << "-------------------------------------Test-5----" << std::endl;
	{
		Cat	cat1;
		Cat	cat2;
		Dog	dog1;
		Dog	dog2;

		cat1 = cat2;
		dog1 = dog2;
	}
	std::cout << "-------------------------------------Test-6----" << std::endl;
	{
		Cat	cat1;
		Cat	cat2;

		std::cout << "-------------------------" << std::endl;
		cat1.printIdeas();
		cat2.printIdeas();
		std::cout << "-------------------------" << std::endl;
		cat1.addIdea("destroy humanity");
		cat2.addIdea("save humanity");
		cat2.addIdea("save humanity");
		cat1.printIdeas();
		cat2.printIdeas();
		std::cout << "-------------------------" << std::endl;
		cat2 = cat1;
		cat1.printIdeas();
		cat2.printIdeas();
		std::cout << "-------------------------" << std::endl;
	}
	std::cout << "-------------------------------------Test-7----" << std::endl;
	{
		Dog	dog1;
		Dog	dog2;

		std::cout << "-------------------------" << std::endl;
		dog1.printIdeas();
		dog2.printIdeas();
		std::cout << "-------------------------" << std::endl;
		dog1.addIdea("where is the ball?");
		dog1.addIdea("croquettes");
		dog2.addIdea("to eat");
		dog2.addIdea("play ball");
		dog1.printIdeas();
		dog2.printIdeas();
		std::cout << "-------------------------" << std::endl;
		dog1 = dog2;
		dog1.printIdeas();
		dog2.printIdeas();
		std::cout << "-------------------------" << std::endl;
	}
	std::cout << "-------------------------------------End-------" << std::endl;
	return (0);
}
