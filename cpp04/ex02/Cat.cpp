/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 10:59:03 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) :
	AAnimal()
{
	this->type = "cat";
	this->_brain = new Brain();
	this->_numberIdeas = 0;
	std::cout
		<< GREEN
		<< "a new cat has been created"
		<< RESET
		<< std::endl;
	return ;
}

Cat::Cat(Cat const &src) :
	AAnimal(src)
{
	this->_brain = new Brain();
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
	delete _brain;
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
	{
		this->type = rhs.getType();
		*this->_brain = *rhs._brain;
		this->_numberIdeas = rhs._numberIdeas;
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

void	Cat::addIdea(std::string idea)
{
	if (this->_numberIdeas < 100)
	{
		this->_brain->ideas[this->_numberIdeas] = idea;
		this->_numberIdeas++;
	}
}

void    Cat::printIdeas(void) const
{
	for (unsigned int idea = 0; idea < this->_numberIdeas; idea++)
		std::cout << this->_brain->ideas[idea] << std::endl;
}
