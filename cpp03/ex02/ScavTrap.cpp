/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:32:02 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 16:19:54 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "anonymous";
	this->_hitpoints = 100;
	this->_energyPoints= 50;
	this->_attackDamage = 20;
	std::cout
		<< "a new anonymous ScavTrap has been created from the void"
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) :
	ClapTrap(src._name)
{
	*this = src;
	std::cout
		<< "a new ScavTrap has been created from a copy"
		<< std::endl
		<< "he is named: " << this->_name
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const &name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints= 50;
	this->_attackDamage = 20;
	std::cout
		<< "a new ScavTrap has been created"
		<< std::endl
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
