/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:32:02 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 05:43:28 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
	ClapTrap()
{
	this->_hitPoints = this->_defaultHitPoints;
	this->_energyPoints = this->_defaultEnergyPoints;
	this->_attackDamage = this->_defaultAttackDamage;
	std::cout
		<< GREEN
		<< "a new anonymous FragTrap has been created from the void"
		<< RESET
		<< std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new FragTrap has been created from a copy. he is named: "
		<< this->_name
		<< RESET
		<< std::endl;
	return ;
}

FragTrap::FragTrap(std::string const &name) :
	ClapTrap(name)
{
	this->_hitPoints = this->_defaultHitPoints;
	this->_energyPoints = this->_defaultEnergyPoints;
	this->_attackDamage = this->_defaultAttackDamage;
	std::cout
		<< GREEN
		<< "a new FragTrap has been created. he is named: " << this->_name
		<< RESET
		<< std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout
		<< RED
		<< "a bad FragTrap " << this->_name << " was destroyed"
		<< RESET
		<< std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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
		<< "a good FragTrap " << this->_name << " has been assigned"
		<< RESET
		<< std::endl;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	if (this->_energyPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "FragTrap " << this->_name
			<< " doesn't have enough energy points to attack"
			<< RESET
			<< std::endl;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "FragTrap " << this->_name
			<< " is dead and can no longer attack"
			<< RESET
			<< std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout
			<< WHITE
			<< "FragTrap " << this->_name << " attack " << target
			<< ", causing " << this->_attackDamage << " points of damage!"
			<< RESET
			<< std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_energyPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "FragTrap " << this->_name
			<< " doesn't have enough energy points to ask high fives"
			<< RESET
			<< std::endl;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "FragTrap " << this->_name
			<< " is dead and can no longer ask high fives"
			<< RESET
			<< std::endl;
	}
	else
	{
		std::cout
			<< WHITE
			<< "FragTrap "
			<< this->_name
			<< " requires a super high fives with you!"
			<< RESET
			<< std::endl;
	}
}
