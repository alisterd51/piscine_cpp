/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:41:12 by anclarma          #+#    #+#             */
/*   Updated: 2021/10/31 01:26:54 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int		n;

	horde = new Zombie[N];
	n = 0;
	while (n < N)
	{
		horde[n].naming(name);
		n++;
	}
	return (horde);
}
