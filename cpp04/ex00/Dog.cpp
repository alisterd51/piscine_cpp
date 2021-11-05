/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 16:28:45 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) :
	Animal()
{
	this->type = "dog";
	return ;
}

Dog::Dog(Dog const &src) :
	Animal()
{
	*this = src;
	return ;
}

Dog::~Dog(void)
{
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
