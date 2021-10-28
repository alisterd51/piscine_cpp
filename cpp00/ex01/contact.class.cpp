/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:08:56 by anclarma          #+#    #+#             */
/*   Updated: 2021/10/28 18:55:23 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	print_str(std::string str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = str.length();
	while (i + j < 10)
	{
		if (i + j + len < 10)
		{
			std::cout << " ";
			i++;
		}
		else if (i + j == 9 && len > 10)
		{
			std::cout << ".";
			j++;
		}
		else
		{
			std::cout << str[j];
			j++;
		}
	}
}

void	Contact::print(void)
{
	print_str(this->first_name);
	std::cout << "|";
	print_str(this->last_name);
	std::cout << "|";
	print_str(this->nickname);
	std::cout << "|";
	print_str(this->phone_number);
	std::cout << std::endl;
}
