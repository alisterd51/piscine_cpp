/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:43:36 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/07 16:46:33 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) :
	AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const &src) :
	AMateria("cure")
{
	*this = src;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Cure*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout
		<< "* heals "
		<< target.getName()
		<< "'s wounds *"
		<< std::endl;
	return ;
}
