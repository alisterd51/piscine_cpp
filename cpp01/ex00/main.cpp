/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:22:58 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/11 15:28:08 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	{
		Zombie	zombie1;

		zombie1.setName("antoine");
		zombie1.announce();
	}
	{
		Zombie  *zombie2;

		zombie2 = newZombie("claude");
		zombie2->announce();
		delete zombie2;
	}
	{
		randomChump("jean");
	}
	return (0);
}

