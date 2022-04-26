/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 06:09:41 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void) :
	WrongAnimal()
{
	this->type = "wrong cat";
	std::cout
		<< GREEN
		<< "a new wrong cat has been created"
		<< RESET
		<< std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src) :
	WrongAnimal()
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new wrong cat has been created by copy"
		<< RESET
		<< std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout
		<< RED
		<< "an wrong cat has been destroyed"
		<< RESET
		<< std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout
		<< "wrong miaou"
		<< std::endl;
	return ;
}
