/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:32:02 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 20:41:30 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
	ClapTrap(),
	_name("anonymous"),
	_hitpoints(100),
	_energyPoints(50),
	_attackDamage(20)
{
	ClapTrap::_hitpoints = this->_hitpoints;
	ClapTrap::_energyPoints = this->_energyPoints;
	ClapTrap::_attackDamage = this->_attackDamage;
	std::cout
		<< "a new anonymous ScavTrap has been created from the void"
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout
		<< "a new ScavTrap has been created from a copy, "
		<< "he is named: " << this->_name
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const &name) :
	ClapTrap(name),
	_name(name),
	_hitpoints(100),
	_energyPoints(50),
	_attackDamage(20)
{
	ClapTrap::_hitpoints = this->_hitpoints;
	ClapTrap::_energyPoints = this->_energyPoints;
	ClapTrap::_attackDamage = this->_attackDamage;
	std::cout
		<< "a new ScavTrap has been created, "
		<< "he is named: " << this->_name
		<< std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout
		<< "a bad ScavTrap "
		<< this->_name
		<< " was destroyed"
		<< std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout
		<< "a good ScavTrap "
		<< this->_name
		<< " has been assigned"
		<< std::endl;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout
		<< "ScavTrap " << this->_name
		<< " attack " << target
		<< ", causing " << this->_attackDamage
		<< " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout
		<< "ScavTrap "
		<< this->_name
		<< " have enterred in Gate keeper mode"
		<< std::endl;
	return ;
}
