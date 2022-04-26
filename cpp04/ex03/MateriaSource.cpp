/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:20:26 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/17 16:44:06 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int id = 0; id < 4; id++)
		this->_materias[id] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int id = 0; id < 4; id++)
	{
		if (this->_materias[id] != NULL)
			delete this->_materias[id];
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int id = 0; id < 4; id++)
		{
			if (this->_materias[id] != NULL)
				delete this->_materias[id];
		}
		for (int id = 0; id < 4; id++)
		{
			if (rhs._materias[id] != NULL)
				this->_materias[id] = rhs._materias[id]->clone();
			else
				this->_materias[id] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *newMateria)
{
	int	i;

	i = 0;
	while (i < 4 && this->_materias[i] != NULL)
		i++;
	if (i < 4)
		this->_materias[i] = newMateria;
	else
		delete newMateria;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int id = 0; id < 4; id++)
	{
		if (this->_materias[id] != NULL
				&& type.compare(this->_materias[id]->getType()) == 0)
			return (this->_materias[id]->clone());
	}
	return (NULL);
}
