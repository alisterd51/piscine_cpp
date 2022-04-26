/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 06:09:26 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongDog.hpp"

WrongDog::WrongDog(void) :
	WrongAnimal()
{
	this->type = "wrong dog";
	std::cout
		<< GREEN
		<< "a new wrong dog has been created"
		<< RESET
		<< std::endl;
	return ;
}

WrongDog::WrongDog(WrongDog const &src) :
	WrongAnimal()
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new wrong dog has been created by copy"
		<< RESET
		<< std::endl;
	return ;
}

WrongDog::~WrongDog(void)
{
	std::cout
		<< RED
		<< "an wrong dog has been destroyed"
		<< RESET
		<< std::endl;
	return ;
}

WrongDog	&WrongDog::operator=(WrongDog const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout
		<< "wrong wouf"
		<< std::endl;
	return ;
}
