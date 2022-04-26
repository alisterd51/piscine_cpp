/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:45:42 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 07:27:30 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "--------------------" << std::endl;
	{
		DiamondTrap	diamond("abomination");

		std::cout
			<< diamond << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		ClapTrap	*diamond = new DiamondTrap("guardian");

		std::cout
			<< *diamond << std::endl;
		diamond->attack("an insignificant claptrap");
		diamond->takeDamage(15);
		diamond->beRepaired(10);
		std::cout
			<< *diamond << std::endl;
		delete diamond;
	}
	std::cout << "--------------------" << std::endl;
	{
		DiamondTrap	diamond("abomination");
		DiamondTrap	diamondBis(diamond);
		DiamondTrap	diamondTer;
		DiamondTrap	diamondQuater = diamond;

		std::cout
			<< diamond << std::endl
			<< diamondBis << std::endl
			<< diamondTer << std::endl
			<< diamondQuater << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		DiamondTrap	diamond("abomination");

		std::cout
			<< diamond << std::endl;
		diamond.attack("an insignificant claptrap");
		diamond.takeDamage(15);
		diamond.beRepaired(10);
		diamond.guardGate();
		diamond.whoAmI();
		std::cout
			<< diamond << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		DiamondTrap	diamond("abomination");

		std::cout
			<< diamond << std::endl;
		for (int i = 0; i < 110; i++)
			diamond.attack("an insignificant claptrap");
		std::cout
			<< diamond << std::endl;
		diamond.attack("an insignificant claptrap");
		diamond.takeDamage(15);
		diamond.beRepaired(10);
		diamond.guardGate();
		diamond.whoAmI();
		std::cout
			<< diamond << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		DiamondTrap	diamond("abomination");

		std::cout
			<< diamond << std::endl;
		diamond.takeDamage(1500);
		std::cout
			<< diamond << std::endl;
		diamond.attack("an insignificant claptrap");
		diamond.takeDamage(15);
		diamond.beRepaired(10);
		diamond.guardGate();
		diamond.whoAmI();
		std::cout
			<< diamond << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	return (0);
}
