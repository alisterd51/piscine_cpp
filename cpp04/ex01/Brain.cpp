/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:14:17 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 07:45:14 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout
		<< BLUE
		<< "default constructor of the brain class"
		<< RESET
		<< std::endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	std::cout
		<< BLUE
		<< "constructor by copy of the brain class"
		<< RESET
		<< std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout
		<< YELLOW
		<< "default destructor of the brain class"
		<< RESET
		<< std::endl;
	return ;
}

Brain	&Brain::operator=(Brain const &rhs)
{

	if (this != &rhs)
	{
		for (int idea = 0; idea < 100; idea++)
			this->ideas[idea] = rhs.ideas[idea];
	}
	return (*this);
}
