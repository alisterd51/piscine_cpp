/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:56:12 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/23 14:39:58 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	slave1("claptrap n42");
	ClapTrap	slave2("claptrap n41");
	ClapTrap	slave;

	slave1.attack("claptrap n41");
	slave2.takeDamage(1);
	slave2.beRepaired(2);
	slave1.attack("claptrap n41");
	slave2.takeDamage(2);
	//slave 2 a 7 hp
	slave = slave2;
	//slave a 7 hp
	slave1.attack("slave");
	slave.takeDamage(0);
	return (0);
}
