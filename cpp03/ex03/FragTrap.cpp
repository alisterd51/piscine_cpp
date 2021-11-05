/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:32:02 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 16:21:57 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
	ClapTrap(),
	_name("anonymous"),
	_hitpoints(100),
	_energyPoints(100),
	_attackDamage(30)
{
	ClapTrap::_hitpoints = this->_hitpoints;
	ClapTrap::_energyPoints = this->_energyPoints;
	ClapTrap::_attackDamage = this->_attackDamage;
	std::cout
		<< "a new anonymous FragTrap has been created from the void"
		<< std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src) :
	ClapTrap(src._name)
{
	*this = src;
	std::cout
		<< "a new FragTrap has been created from a copy, "
		<< "he is named: " << this->_name
		<< std::endl;
	return ;
}

FragTrap::FragTrap(std::string const &name) :
	ClapTrap(name),
	_name(name),
	_hitpoints(100),
	_energyPoints(100),
	_attackDamage(30)
{
	ClapTrap::_hitpoints = this->_hitpoints;
	ClapTrap::_energyPoints = this->_energyPoints;
	ClapTrap::_attackDamage = this->_attackDamage;
	std::cout
		<< "a new FragTrap has been created, "
		<< "he is named: " << this->_name
		<< std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout
		<< "a bad FragTrap "
		<< this->_name
		<< " was destroyed"
		<< std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout
		<< "a good FragTrap "
		<< this->_name
		<< " has been assigned"
		<< std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout
		<< "FragTrap " << this->_name
		<< " requires a super high fives with you!"
		<< std::endl;
}
