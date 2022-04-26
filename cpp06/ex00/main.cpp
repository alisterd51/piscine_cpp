/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:38:41 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/19 16:34:11 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <iomanip>

int	main(int ac, char **av)
{
	double	r_double;

	if (ac != 2)
		return (1);
	r_double = strtod(av[1], NULL);
	{
		std::cout << "char: ";
		if (isnan(r_double) || r_double < SCHAR_MIN || r_double > SCHAR_MAX)
			std::cout << "impossible";
		else if (isprint(static_cast<char>(r_double)))
			std::cout << "'" << static_cast<char>(r_double) << "'";
		else
			std::cout << "Non displayable";
		std::cout << std::endl;
	}
	{
		std::cout << "int: ";
		if (isnan(r_double) || r_double < INT_MIN || r_double > INT_MAX)
			std::cout << "impossible";
		else
			std::cout << static_cast<int>(r_double);
		std::cout << std::endl;
	}
	{
		std::cout << "float: " << std::setprecision(1) << std::fixed
			<< static_cast<float>(r_double) << "f" << std::endl;
	}
	{
		std::cout << "double: " << std::setprecision(1) << std::fixed
			<< static_cast<double>(r_double) << std::endl;
	}
	return (0);
}
