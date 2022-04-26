/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 05:09:28 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) :
	Animal()
{
	this->type = "dog";
	std::cout
		<< GREEN
		<< "a new dog has been created"
		<< RESET
		<< std::endl;
	return ;
}

Dog::Dog(Dog const &src) :
	Animal(src)
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new dog has been created by copy"
		<< RESET
		<< std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout
		<< RED
		<< "an dog has been destroyed"
		<< RESET
		<< std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout
		<< "wouf"
		<< std::endl;
	return ;
}
