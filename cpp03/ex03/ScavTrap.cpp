/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:32:02 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 05:41:23 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
	ClapTrap()
{
	this->_hitPoints = this->_defaultHitPoints;
	this->_energyPoints = this->_defaultEnergyPoints;
	this->_attackDamage = this->_defaultAttackDamage;
	std::cout
		<< GREEN
		<< "a new anonymous ScavTrap has been created from the void"
		<< RESET
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new ScavTrap has been created from a copy. he is named: "
		<< this->_name
		<< RESET
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const &name) :
	ClapTrap(name)
{
	this->_hitPoints = this->_defaultHitPoints;
	this->_energyPoints = this->_defaultEnergyPoints;
	this->_attackDamage = this->_defaultAttackDamage;
	std::cout
		<< GREEN
		<< "a new ScavTrap has been created. he is named: " << this->_name
		<< RESET
		<< std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout
		<< RED
		<< "a bad ScavTrap " << this->_name << " was destroyed"
		<< RESET
		<< std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout
		<< BLUE
		<< "a good ScavTrap " << this->_name << " has been assigned"
		<< RESET
		<< std::endl;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_energyPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ScavTrap " << this->_name
			<< " doesn't have enough energy points to attack"
			<< RESET
			<< std::endl;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ScavTrap " << this->_name
			<< " is dead and can no longer attack"
			<< RESET
			<< std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout
			<< WHITE
			<< "ScavTrap " << this->_name << " attack " << target
			<< ", causing " << this->_attackDamage << " points of damage!"
			<< RESET
			<< std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (this->_energyPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ScavTrap " << this->_name
			<< " doesn't have enough energy points to enter in Gate keeper mode"
			<< RESET
			<< std::endl;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ScavTrap " << this->_name
			<< " is dead and can no longer enterre in Gate keeper mode"
			<< RESET
			<< std::endl;
	}
	else
	{
		std::cout
			<< WHITE
			<< "ScavTrap "
			<< this->_name
			<< " have enterred in Gate keeper mode"
			<< RESET
			<< std::endl;
	}
}
