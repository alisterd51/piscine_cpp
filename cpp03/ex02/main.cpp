/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:45:42 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 07:19:08 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "--------------------" << std::endl;
	{
		FragTrap	frag("fighter");

		std::cout
			<< frag << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		ClapTrap	*frag = new FragTrap("guardian");

		std::cout
			<< *frag << std::endl;
		frag->attack("an insignificant claptrap");
		frag->takeDamage(15);
		frag->beRepaired(10);
		std::cout
			<< *frag << std::endl;
		delete frag;
	}
	std::cout << "--------------------" << std::endl;
	{
		FragTrap	frag("fighter");
		FragTrap	fragBis(frag);
		FragTrap	fragTer;
		FragTrap	fragQuater = frag;

		std::cout
			<< frag << std::endl
			<< fragBis << std::endl
			<< fragTer << std::endl
			<< fragQuater << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		FragTrap	frag("fighter");

		std::cout
			<< frag << std::endl;
		frag.attack("an insignificant claptrap");
		frag.takeDamage(15);
		frag.beRepaired(10);
		frag.highFivesGuys();
		std::cout
			<< frag << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		FragTrap	frag("fighter");

		std::cout
			<< frag << std::endl;
		for (int i = 0; i < 110; i++)
			frag.attack("an insignificant claptrap");
		std::cout
			<< frag << std::endl;
		frag.attack("an insignificant claptrap");
		frag.takeDamage(15);
		frag.beRepaired(10);
		frag.highFivesGuys();
		std::cout
			<< frag << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		FragTrap	frag("fighter");

		std::cout
			<< frag << std::endl;
		frag.takeDamage(1500);
		std::cout
			<< frag << std::endl;
		frag.attack("an insignificant claptrap");
		frag.takeDamage(15);
		frag.beRepaired(10);
		frag.highFivesGuys();
		std::cout
			<< frag << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	return (0);
}
