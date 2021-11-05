/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 23:53:29 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) :
	type("animal")
{
	return ;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	return ;
}

Animal::~Animal(void)
{
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
