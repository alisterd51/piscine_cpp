/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:54:32 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/16 17:52:30 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void	test1(int *a)
{
	*a = *a + 1;
}

void	test2(double *a)
{
	*a = *a + 1.0;
}

void	test3(std::string *a)
{
	*a = "meh";
}

int	main(void)
{
	{
		int	tab[3] = {0, 1, 2};

		std::cout << tab[0] << ", " << tab[1] << ", " << tab[2] << std::endl;
		::iter(tab, 3, test1);
		std::cout << tab[0] << ", " << tab[1] << ", " << tab[2] << std::endl;
	}
	{
		double	tab[3] = {0.1, 2.3, 4.5};

		std::cout << tab[0] << ", " << tab[1] << ", " << tab[2] << std::endl;
		::iter(tab, 3, test2);
		std::cout << tab[0] << ", " << tab[1] << ", " << tab[2] << std::endl;
	}
	{
		std::string	tab[3] = {"a", "b", "c"};

		std::cout << tab[0] << ", " << tab[1] << ", " << tab[2] << std::endl;
		::iter(tab, 3, test3);
		std::cout << tab[0] << ", " << tab[1] << ", " << tab[2] << std::endl;
	}
	return (0);
}
