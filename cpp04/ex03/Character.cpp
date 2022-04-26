/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:48:22 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 18:32:12 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) :
	_name("anonymous"),
	_size_of_history(4)
{
	for (int id = 0; id < 4; id++)
		this->_equipment[id] = NULL;
	this->_history = new AMateria*[this->_size_of_history];
	for (int id = 0; id < this->_size_of_history; id++)
		this->_history[id] = NULL;
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
	for (int id = 0; id < 4; id++)
		this->_equipment[id] = NULL;
	this->_history = new AMateria*[this->_size_of_history];
	for (int id = 0; id < this->_size_of_history; id++)
		this->_history[id] = NULL;
	return ;
}

Character::~Character(void)
{
	for (int id = 0; id < 4; id++)
	{
		if (this->_equipment[id] != NULL)
			delete this->_equipment[id];
	}
	if (this->_history == NULL)
		return ;
	for (int id = 0; id < this->_size_of_history; id++)
	{
		if (this->_history[id] != NULL)
			delete this->_history[id];
	}
	delete [] this->_history;
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		for (int id = 0; id < 4; id++)
			delete this->_equipment[id];
		if (this->_history != NULL)
		{
			for (int id = 0; id < this->_size_of_history; id++)
			{
				if (this->_history[id] != NULL)
					delete this->_history[id];
			}
			delete [] this->_history;
		}
		this->_name = rhs._name;
		this->_size_of_history = rhs._size_of_history;
		for (int id = 0; id < 4; id++)
		{
			if (rhs._equipment[id] != NULL)
				this->_equipment[id] = rhs._equipment[id]->clone();
			else
				this->_equipment[id] = NULL;
		}
		this->_history = new AMateria*[this->_size_of_history];
		for (int id = 0; id < this->_size_of_history; id++)
		{
			if (rhs._history[id] != NULL)
				this->_history[id] = rhs._history[id]->clone();
			else
				this->_history[id] = NULL;
		}
	}
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
	else
		delete m;
}

void	Character::unequip(int idx)
{
	if (0 <= idx && idx <= 3)
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

	if (this->_size_of_history * 2 <= this->_size_of_history)
		return ;
	this->_size_of_history *= 2;
	new_history = new AMateria*[this->_size_of_history];
	for (int id = 0; id < this->_size_of_history / 2; id++)
		new_history[id] = this->_history[id];
	delete this->_history;
	this->_history = new_history;
}
