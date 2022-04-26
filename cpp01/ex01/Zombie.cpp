/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:54:59 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/11 15:30:22 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) :
	name("anonymous")
{
	return ;
}

Zombie::Zombie(Zombie const &src)
{
	*this = src;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " the zombie is destroyed" << std::endl;
	return ;
}

Zombie	&Zombie::operator=(Zombie const &rhs)
{
	if (this != &rhs)
		this->name = rhs.name;
	return (*this);
}

void    Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
	return ;
}
