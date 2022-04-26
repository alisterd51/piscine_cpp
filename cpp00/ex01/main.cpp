/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:08:36 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/11 07:11:16 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
	std::string	line;
	PhoneBook	phonebook;

	while (1)
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		std::cout << "$> ";
		std::getline(std::cin, line);
		if (line.compare("EXIT") == 0)
		{
			std::cout << "BYE" << std::endl;
			break ;
		}
		else if (line.compare("ADD") == 0)
		{
			phonebook.add();
		}
		else if (line.compare("SEARCH") == 0)
		{
			phonebook.search();
		}
	}
    return (0);
}
