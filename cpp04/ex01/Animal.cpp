/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 22:57:51 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void) :
	type("animal")
{
	std::cout
		<< "default constructor of the animal class"
		<< std::endl;
	return ;
}

Animal::Animal(Animal const &src)
{
	std::cout
		<< "constructor by copy of the animal class"
		<< std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout
		<< "default destructor of the animal class"
		<< std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
