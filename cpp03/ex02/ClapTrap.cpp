/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:06:59 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 07:23:52 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("anonymous"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
		<< GREEN
		<< "a new anonymous ClapTrap has been created from the void"
		<< RESET
		<< std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout
		<< GREEN
		<< "a new ClapTrap has been created from a copy. he is named: "
		<< this->_name
		<< RESET
		<< std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const &name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout
		<< GREEN
		<< "a new ClapTrap has been created. he is named: " << this->_name
		<< RESET
		<< std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout
		<< RED
		<< "a bad ClapTrap " << this->_name << " was destroyed"
		<< RESET
		<< std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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
		<< "a good ClapTrap " << this->_name << " has been assigned"
		<< RESET
		<< std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energyPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ClapTrap " << this->_name
			<< " doesn't have enough energy points to attack"
			<< RESET
			<< std::endl;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ClapTrap " << this->_name
			<< " is dead and can no longer attack"
			<< RESET
			<< std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout
			<< WHITE
			<< "ClapTrap " << this->_name << " attack " << target
			<< ", causing " << this->_attackDamage << " points of damage!"
			<< RESET
			<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ClapTrap " << this->_name
			<< " doesn't have enough energy points to take damage"
			<< RESET
			<< std::endl;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ClapTrap " << this->_name
			<< " is dead and can no longer take damage"
			<< RESET
			<< std::endl;
	}
	else
	{
		if (this->_hitPoints >= amount)
			this->_hitPoints -= amount;
		else
			this->_hitPoints = 0;
		std::cout
			<< WHITE
			<< "ClapTrap " << this->_name << " takes " << amount
			<< " damage, he only has " << this->_hitPoints
			<< " life points left."
			<< RESET
			<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ClapTrap " << this->_name
			<< " doesn't have enough energy points to be repaired"
			<< RESET
			<< std::endl;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout
			<< MAGENTA
			<< "ClapTrap " << this->_name
			<< " is dead and can no longer be repaired"
			<< RESET
			<< std::endl;
	}
	else
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout
			<< WHITE
			<< "ClapTrap " << this->_name
			<< " is repaired by " << amount
			<< " hit points, he only has " << this->_hitPoints
			<< " life points left."
			<< RESET
			<< std::endl;
	}
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i)
{
	o
		<< "name: " << i.getName()
		<< ", hit points: " << i.getHitPoints()
		<< ", energy points: " << i.getEnergyPoints()
		<< ", attack damage: " << i.getAttackDamage();
	return (o);
}
