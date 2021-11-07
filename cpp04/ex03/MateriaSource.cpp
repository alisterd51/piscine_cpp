/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:20:26 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/07 20:25:51 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		this->_materias[i] = NULL;
		i++;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_materias[i] != NULL)
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
		i++;
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
		*this = rhs;
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
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_materias[i] != NULL
				&& type.compare(this->_materias[i]->getType()) == 0)
			return (this->_materias[i]->clone());
		i++;
	}
	return (NULL);
}
