/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:45:42 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/16 07:21:55 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	std::cout
		<< "--------------------" << std::endl;
	{
		ClapTrap	slave42("claptrap n42");
		ClapTrap	slave42Bis(slave42);
		ClapTrap	slave;

		std::cout
			<< slave42 << std::endl
			<< slave42Bis << std::endl
			<< slave << std::endl;
		slave = slave42;
		std::cout
			<< slave42 << std::endl
			<< slave42Bis << std::endl
			<< slave << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		ClapTrap	*clap = new ClapTrap("guardian");

		std::cout
			<< *clap << std::endl;
		clap->attack("an insignificant claptrap");
		clap->takeDamage(5);
		clap->beRepaired(10);
		std::cout
			<< *clap << std::endl;
		delete clap;
	}
	std::cout
		<< "--------------------" << std::endl;
	{
		ClapTrap	slave42("claptrap n42");
		ClapTrap	slave;

		std::cout
			<< slave42 << std::endl
			<< slave << std::endl;
		slave42.attack("other slave");
		slave.attack("other slave");
		slave42.takeDamage(1);
		slave.takeDamage(2);
		std::cout
			<< slave42 << std::endl
			<< slave << std::endl;
		slave42.beRepaired(3);
		slave.beRepaired(4);
		std::cout
			<< slave42 << std::endl
			<< slave << std::endl;
	}
	std::cout
		<< "--------------------" << std::endl;
	{
		ClapTrap    slave42("claptrap n42");

		std::cout
			<< slave42 << std::endl;
		for (int count = 0; count < 20; count++)
			slave42.attack("other slave");
		std::cout
			<< slave42 << std::endl;
	}
	std::cout
		<< "--------------------" << std::endl;
	{
		ClapTrap    slave42("claptrap n42");

		std::cout
			<< slave42 << std::endl;
		for (int count = 0; count < 20; count++)
			slave42.takeDamage(1);
		std::cout
			<< slave42 << std::endl;
		slave42.attack("other slave");
		slave42.takeDamage(15);
		slave42.beRepaired(16);
		std::cout
			<< slave42 << std::endl;
	}
	std::cout
		<< "--------------------" << std::endl;
	{
		ClapTrap    slave42("claptrap n42");

		std::cout
			<< slave42 << std::endl;
		for (int count = 0; count < 20; count++)
			slave42.beRepaired(3);
		std::cout
			<< slave42 << std::endl;
	}
	std::cout
		<< "--------------------" << std::endl;
	{
		ClapTrap    slave42("claptrap n42");

		std::cout
			<< slave42 << std::endl;
		for (int count = 0; count < 20; count++)
			slave42.beRepaired(0);
		std::cout
			<< slave42 << std::endl;
	}
	std::cout
		<< "--------------------" << std::endl;
	return (0);
}
