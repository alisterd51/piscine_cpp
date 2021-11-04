/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:32:02 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 15:22:43 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("anonymous"),
	_hitpoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
		<< "a new anonymous ClapTrap has been created from the void"
		<< std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout
		<< "a new ClapTrap has been created from a copy"
		<< std::endl
		<< "he is named: " << this->_name
		<< std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const &name) :
	_name(name),
	_hitpoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
		<< "a new ClapTrap has been created"
		<< std::endl
		<< "he is named: " << this->_name
		<< std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout
		<< "a bad ClapTrap "
		<< this->_name
		<< " was destroyed"
		<< std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout
		<< "a good ClapTrap "
		<< this->_name
		<< " has been assigned"
		<< std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout
		<< "ClapTrap " << this->_name
		<< " attack " << target
		<< ", causing " << this->_attackDamage
		<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints >= amount)
		this->_energyPoints -= amount;
	else
		this->_energyPoints = 0;
	std::cout
		<< "ClapTrap " << this->_name
		<< " take " << amount
		<< " dommage, he only has " << this->_energyPoints
		<< " life points left." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints += amount;
	std::cout
		<< "ClapTrap " << this->_name
		<< " is repaired by " << amount
		<< " hit points, he only has " << this->_energyPoints
		<< " life points left." << std::endl;
}
