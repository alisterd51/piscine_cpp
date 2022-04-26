/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 05:09:45 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) :
	Animal()
{
	this->type = "cat";
	std::cout
		<< GREEN
		<< "a new cat has been created"
		<< RESET
		<< std::endl;
	return ;
}

Cat::Cat(Cat const &src) :
	Animal(src)
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new animal has been created by copy"
		<< RESET
		<< std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout
		<< RED
		<< "an cat has been destroyed"
		<< RESET
		<< std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout
		<< "miaou"
		<< std::endl;
	return ;
}
