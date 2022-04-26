/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 10:52:15 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) :
	type("animal")
{
	std::cout
		<< GREEN
		<< "a new animal has been created"
		<< RESET
		<< std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new animal has been created by copy"
		<< RESET
		<< std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout
		<< RED
		<< "an animal has been destroyed"
		<< RESET
		<< std::endl;
	return ;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
