/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 05:06:51 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) :
	type("animal")
{
	std::cout
		<< GREEN
		<< "a new animal has been created"
		<< RESET
		<< std::endl;
	return ;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new animal has been created by copy"
		<< RESET
		<< std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout
		<< RED
		<< "an animal has been destroyed"
		<< RESET
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
