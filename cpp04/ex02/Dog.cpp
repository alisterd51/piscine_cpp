/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 22:59:38 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) :
	Animal()
{
	std::cout
		<< "default constructor of the dog class"
		<< std::endl;
	this->type = "dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const &src) :
	Animal()
{
	std::cout
		<< "constructor by copy of the dog class"
		<< std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout
		<< "default destructor of the dog class"
		<< std::endl;
	delete this->_brain;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.getType();
		this->_brain = rhs._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout
		<< "wouf"
		<< std::endl;
	return ;
}
