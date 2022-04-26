/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:45:42 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 07:14:39 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "--------------------" << std::endl;
	{
		ScavTrap	scav("guardian");

		std::cout
			<< scav << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		ClapTrap	*scav = new ScavTrap("guardian");

		std::cout
			<< *scav << std::endl;
		scav->attack("an insignificant claptrap");
		scav->takeDamage(15);
		scav->beRepaired(10);
		std::cout
			<< *scav << std::endl;
		delete scav;
	}
	std::cout << "--------------------" << std::endl;
	{
		ScavTrap	scav("guardian");
		ScavTrap	scavBis(scav);
		ScavTrap	scavTer;
		ScavTrap	scavQuater = scav;

		std::cout
			<< scav << std::endl
			<< scavBis << std::endl
			<< scavTer << std::endl
			<< scavQuater << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		ScavTrap	scav("guardian");

		std::cout
			<< scav << std::endl;
		scav.attack("an insignificant claptrap");
		scav.takeDamage(15);
		scav.beRepaired(10);
		scav.guardGate();
		std::cout
			<< scav << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		ScavTrap	scav("guardian");

		std::cout
			<< scav << std::endl;
		for (int i = 0; i < 60; i++)
			scav.attack("an insignificant claptrap");
		std::cout
			<< scav << std::endl;
		scav.attack("an insignificant claptrap");
		scav.takeDamage(15);
		scav.beRepaired(10);
		scav.guardGate();
		std::cout
			<< scav << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		ScavTrap	scav("guardian");

		std::cout
			<< scav << std::endl;
		scav.takeDamage(1500);
		std::cout
			<< scav << std::endl;
		scav.attack("an insignificant claptrap");
		scav.takeDamage(15);
		scav.beRepaired(10);
		scav.guardGate();
		std::cout
			<< scav << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	return (0);
}
