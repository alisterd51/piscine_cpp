/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:48:22 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/07 17:18:21 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) :
	_name("anonymous")
{
	int	id;

	id = 0;
	while (id < 4)
		this->_equipment[id++] = NULL;
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character::Character(std::string const &name) :
	_name(name)
{
	int	id;

	id = 0;
	while (id < 4)
		this->_equipment[id++] = NULL;
	return ;
}

Character::~Character(void)
{
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int	id;

	id = 0;
	while (id < 4 && this->_equipment[id] != NULL)
		id++;
	if (id < 4)
		this->_equipment[id] = m;
}

void Character::unequip(int idx)
{
	if (idx < 4)
		this->_equipment[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->_equipment[idx] != NULL)
		this->_equipment[idx]->use(target);
}
