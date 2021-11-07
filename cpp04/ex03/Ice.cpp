/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:33:22 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/07 16:42:01 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) :
	AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const &src) :
	AMateria("ice")
{
	*this = src;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout
		<< "* shoots an ice bolt at "
		<< target.getName()
		<< " *"
		<< std::endl;
	return ;
}
