/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:44:38 by anclarma          #+#    #+#             */
/*   Updated: 2021/10/28 18:34:18 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "phonebook.class.hpp"

int	main(void)
{
	std::string	s;
	Phonebook	phonebook;

	while (1)
	{
		if (std::cin.eof())
			break ;
		s.clear();
		std::cin >> s;
		if (s.compare("EXIT") == 0)
		{
			std::cout << "BYE" << std::endl;
			break ;
		}
		else if (s.compare("ADD") == 0)
		{
			phonebook.add();
		}
		else if (s.compare("SEARCH") == 0)
		{
			phonebook.search();
		}
	}
	return (0);
}
