/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 22:58:47 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat(void) :
	Animal()
{
	std::cout
		<< "default constructor of the cat class"
		<< std::endl;
	this->type = "cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const &src) :
	Animal()
{
	std::cout
		<< "constructor by copy of the cat class"
		<< std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout
		<< "default destructor of the cat class"
		<< std::endl;
	delete this->_brain;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.getType();
		this->_brain = rhs._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout
		<< "miaou"
		<< std::endl;
	return ;
}
