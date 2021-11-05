/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:14:17 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 22:57:32 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout
		<< "default constructor of the brain class"
		<< std::endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	std::cout
		<< "constructor by copy of the brain class"
		<< std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout
		<< "default destructor of the brain class"
		<< std::endl;
	return ;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	int	idea;

	idea = 0;
	if (this != &rhs)
	{
		while (idea < 100)
		{
			this->ideas[idea] = rhs.ideas[idea];
			idea++;
		}
	}
	return (*this);
}
