/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:52:50 by anclarma          #+#    #+#             */
/*   Updated: 2021/10/31 01:28:35 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		n;

	horde = zombieHorde(21, "jeans");
	n = 0;
	while (n < 21)
	{
		horde[n].announce();
		n++;
	}
	delete [] horde;
	return (0);
}
