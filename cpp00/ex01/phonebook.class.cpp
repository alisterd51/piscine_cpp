/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:08:56 by anclarma          #+#    #+#             */
/*   Updated: 2021/10/30 17:41:02 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"

Phonebook::Phonebook(void) :
	conctact_number(0)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::add(void)
{
	int	index;

	index = this->conctact_number;
	if (index < 8)
	{
		std::cout << "Pease enter your first name: ";
		std::cin >> this->conctact_tab[index].first_name;
		std::cout << "Pease enter your last name: ";
		std::cin >> this->conctact_tab[index].last_name;
		std::cout << "Pease enter your nickname: ";
		std::cin >> this->conctact_tab[index].nickname;
		std::cout << "Pease enter your phone number: ";
		std::cin >> this->conctact_tab[index].phone_number;
		std::cout << "Pease enter your darkest secret: ";
		std::cin >> this->conctact_tab[index].darkest_secret;
		std::cout << "Thanks" << std::endl;
		this->conctact_number++;
	}
	return ;
}

void	Phonebook::search(void)
{
	int	index;

	index = 0;
	while (index < this->conctact_number)
	{
		this->conctact_tab[index].print();
		index++;
	}
	return ;
}
