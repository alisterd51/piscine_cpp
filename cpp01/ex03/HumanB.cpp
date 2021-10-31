/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:21:53 by anclarma          #+#    #+#             */
/*   Updated: 2021/10/31 16:43:55 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	_name(name),
	_weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack(void)
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name
			<< " is not armed"
			<< std::endl;
	}
	else
	{
		std::cout << this->_name
			<< " attacks with his "
			<< this->_weapon->getType()
			<< std::endl;
	}
	return ;
}
