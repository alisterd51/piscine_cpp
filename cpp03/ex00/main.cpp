/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:56:12 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/04 15:17:26 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

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
	return (0);
}
