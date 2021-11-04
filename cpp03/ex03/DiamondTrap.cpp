/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:32:02 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 20:45:03 by anclarma         ###   ########.fr       */
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
	ClapTrap::_hitpoints = FragTrap::_hitpoints;
	ClapTrap::_energyPoints = ScavTrap::_energyPoints;
	ClapTrap::_attackDamage = FragTrap::_attackDamage;
	ScavTrap::_hitpoints = FragTrap::_hitpoints;
	ScavTrap::_energyPoints = ScavTrap::_energyPoints;
	ScavTrap::_attackDamage = FragTrap::_attackDamage;
	FragTrap::_hitpoints = FragTrap::_hitpoints;
	FragTrap::_energyPoints = ScavTrap::_energyPoints;
	FragTrap::_attackDamage = FragTrap::_attackDamage;
	std::cout
		<< "a new anonymous DiamondTrap has been created from the void"
		<< std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
	std::cout
		<< "a new DiamondTrap has been created from a copy, "
		<< "he is named: " << this->_name
		<< std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const &name) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name"),
	_name(name)
{
	ClapTrap::_hitpoints = FragTrap::_hitpoints;
	ClapTrap::_energyPoints = ScavTrap::_energyPoints;
	ClapTrap::_attackDamage = FragTrap::_attackDamage;
	ScavTrap::_hitpoints = FragTrap::_hitpoints;
	ScavTrap::_energyPoints = ScavTrap::_energyPoints;
	ScavTrap::_attackDamage = FragTrap::_attackDamage;
	FragTrap::_hitpoints = FragTrap::_hitpoints;
	FragTrap::_energyPoints = ScavTrap::_energyPoints;
	FragTrap::_attackDamage = FragTrap::_attackDamage;
	std::cout
		<< "a new DiamondTrap has been created, "
		<< "he is named: " << this->_name
		<< std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout
		<< "a bad DiamondTrap "
		<< this->_name
		<< " was destroyed"
		<< std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		ClapTrap::_name = rhs.ClapTrap::_name;
		ClapTrap::_hitpoints = rhs.ClapTrap::_hitpoints;
		ClapTrap::_energyPoints = rhs.ClapTrap::_energyPoints;
		ClapTrap::_attackDamage = rhs.ClapTrap::_attackDamage;
	}
	std::cout
		<< "a good DiamondTrap "
		<< this->_name
		<< " has been assigned"
		<< std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout
		<< "my name is: " << this->_name
		<< " and my clapTrap name is: " << ClapTrap::_name
		<< std::endl;
}
