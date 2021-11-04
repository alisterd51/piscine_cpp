/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:56:12 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 16:39:03 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	return (0);
}
