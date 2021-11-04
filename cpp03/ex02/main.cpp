/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:56:12 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 17:28:48 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	slave1("claptrap n42");
	ClapTrap	slave2("claptrap n41");

	slave1.attack("claptrap n41");
	slave2.takeDamage(1);
	slave2.beRepaired(2);
	slave1.attack("claptrap n41");
	slave2.takeDamage(1000);
	slave2 = ClapTrap("claptrap n41 bis");
	slave1.attack("claptrap n41 bis");
	slave2.takeDamage(0);

	ScavTrap	slave3("scavtrap n0");

	slave3.attack("claptrap n41 bis");
	slave3.takeDamage(20);
	slave3.beRepaired(10);
	slave3.guardGate();

	FragTrap	slave4("fragtarp n1");

	slave4.attack("claptrap n41 bis");
	slave4.takeDamage(20);
	slave4.beRepaired(10);
	slave4.highFivesGuys();
	return (0);
}
