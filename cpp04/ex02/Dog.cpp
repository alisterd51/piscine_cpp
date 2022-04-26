/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:40:50 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 10:59:15 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) :
	AAnimal()
{
	this->type = "dog";
	this->_brain = new Brain();
	this->_numberIdeas = 0;
	std::cout
		<< GREEN
		<< "a new dog has been created"
		<< RESET
		<< std::endl;
	return ;
}

Dog::Dog(Dog const &src) :
	AAnimal(src)
{
	this->_brain = new Brain();
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
	delete _brain;
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
	{
		this->type = rhs.getType();
		*this->_brain = *rhs._brain;
		this->_numberIdeas = rhs._numberIdeas;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout
		<< "wouf"
		<< std::endl;
	return ;
}

void	Dog::addIdea(std::string idea)
{
	if (this->_numberIdeas < 100)
	{
		this->_brain->ideas[this->_numberIdeas] = idea;
		this->_numberIdeas++;
	}
}

void    Dog::printIdeas(void) const
{
	for (unsigned int idea = 0; idea < this->_numberIdeas; idea++)
		std::cout << this->_brain->ideas[idea] << std::endl;
}
