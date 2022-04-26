/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:32:02 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 05:50:55 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :
	ClapTrap("anonymous_clap_name"),
	ScavTrap("anonymous_clap_name"),
	FragTrap("anonymous_clap_name"),
	_name("anonymous")
{
	this->_hitPoints = this->_defaultHitPoints;
	this->_energyPoints = this->_defaultEnergyPoints;
	this->_attackDamage = this->_defaultAttackDamage;
	std::cout
		<< GREEN
		<< "a new anonymous DiamondTrap has been created from the void"
		<< RESET
		<< std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new DiamondTrap has been created from a copy. he is named: "
		<< this->_name
		<< RESET
		<< std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const &name) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name"),
	_name(name)
{
	this->_hitPoints = this->_defaultHitPoints;
	this->_energyPoints = this->_defaultEnergyPoints;
	this->_attackDamage = this->_defaultAttackDamage;
	std::cout
		<< GREEN
		<< "a new DiamondTrap has been created. he is named: " << this->_name
		<< RESET
		<< std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout
		<< RED
		<< "a bad DiamondTrap " << this->_name << " was destroyed"
		<< RESET
		<< std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this != &rhs)
	{
		ClapTrap::_name = rhs.getName();
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout
		<< BLUE
		<< "a good DiamondTrap " << this->_name << " has been assigned"
		<< RESET
		<< std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout
		<< WHITE
		<< "my name is: " << this->_name
		<< " and my clapTrap name is: " << ClapTrap::_name
		<< RESET
		<< std::endl;
}
