/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 16:30:21 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongDog.hpp"

WrongDog::WrongDog(void) :
	WrongAnimal()
{
	this->type = "dog";
	return ;
}

WrongDog::WrongDog(WrongDog const &src) :
	WrongAnimal()
{
	*this = src;
	return ;
}

WrongDog::~WrongDog(void)
{
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
		<< "wouf"
		<< std::endl;
	return ;
}
