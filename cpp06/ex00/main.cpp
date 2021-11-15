/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:38:41 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/16 00:48:19 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <iostream>

int	main(int ac, char **av)
{
	double	r_double;

	if (ac != 2)
		return (1);
	r_double = strtod(av[1], NULL);
	if (isnan(r_double) || r_double < SCHAR_MIN || r_double > SCHAR_MAX)
		std::cout << "impossible";
	else if (isprint(static_cast<char>(r_double)))
		std::cout << "'" << static_cast<char>(r_double) << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
	if (isnan(r_double) || r_double < INT_MIN || r_double > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(r_double);
	std::cout << std::endl;
	std::cout << static_cast<float>(r_double);
	if ((static_cast<float>(static_cast<int>(r_double)) == r_double
			&& r_double < 1000000) || static_cast<float>(r_double) == 0.0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << static_cast<double>(r_double);
	if (static_cast<double>(static_cast<int>(r_double)) == r_double
			&& r_double < 1000000)
		std::cout << ".0";
	std::cout << std::endl;
	return (0);
}
