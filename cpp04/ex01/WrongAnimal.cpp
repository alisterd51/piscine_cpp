/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 06:10:01 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) :
	type("wrong animal")
{
	std::cout
		<< GREEN
		<< "a new wrong animal has been created"
		<< RESET
		<< std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new wrong animal has been created by copy"
		<< RESET
		<< std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout
		<< RED
		<< "a wrong animal has been destroyed"
		<< RESET
		<< std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout
		<< "wrong sound"
		<< std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
