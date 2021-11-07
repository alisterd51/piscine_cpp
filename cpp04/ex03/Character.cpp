/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:48:22 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/07 22:46:49 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) :
	_name("anonymous"),
	_size_of_history(4)
{
	int	id;

	id = 0;
	while (id < 4)
		this->_equipment[id++] = NULL;
	this->_history = new AMateria*[this->_size_of_history];
	id = 0;
	while (id < this->_size_of_history)
		this->_history[id++] = NULL;
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character::Character(std::string const &name) :
	_name(name),
	_size_of_history(4)
{
	int	id;

	id = 0;
	while (id < 4)
		this->_equipment[id++] = NULL;
	this->_history = new AMateria*[this->_size_of_history];
	id = 0;
	while (id < this->_size_of_history)
		this->_history[id++] = NULL;
	return ;
}

Character::~Character(void)
{
	int	id;

	id = 0;
	while (id < 4)
	{
		if (this->_equipment[id] != NULL)
			delete this->_equipment[id];
		id++;
	}
	id = 0;
	if (this->_history == NULL)
		return ;
	while (id < this->_size_of_history)
	{
		if (this->_history[id] != NULL)
			delete this->_history[id];
		id++;
	}
	delete [] this->_history;
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

std::string	const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int	id;

	id = 0;
	while (id < 4 && this->_equipment[id] != NULL)
		id++;
	if (id < 4)
		this->_equipment[id] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 4)
	{
		to_history(this->_equipment[idx]);
		this->_equipment[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->_equipment[idx] != NULL)
		this->_equipment[idx]->use(target);
}

void	Character::to_history(AMateria *m)
{
	int	id;

	id = 0;
	while (id < this->_size_of_history && this->_history[id] != NULL)
		id++;
	if (id == this->_size_of_history)
		increase_history();
	if (id < this->_size_of_history)
		this->_history[id] = m;
	return ;
}

void	Character::increase_history(void)
{
	AMateria	**new_history;
	int			id;

	if (this->_size_of_history * 2 <= this->_size_of_history)
		return ;
	this->_size_of_history *= 2;
	new_history = new AMateria*[this->_size_of_history];
	id = 0;
	while (id < this->_size_of_history / 2)
	{
		new_history[id] = this->_history[id];
		id++;
	}
	delete this->_history;
	this->_history = new_history;
}
