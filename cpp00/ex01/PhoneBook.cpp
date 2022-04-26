/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:32:29 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/11 07:07:11 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) :
	_index(0),
	_nbContact(0)
{
	return ;
}

PhoneBook::PhoneBook(PhoneBook const &src)
{
	*this = src;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

PhoneBook	&PhoneBook::operator=(PhoneBook const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 9; i++)
			this->_tab[i] = rhs._tab[i];
		this->_index = rhs._index;
		this->_nbContact = rhs._nbContact;
	}
	return (*this);
}

void	PhoneBook::add(void)
{
	this->_tab[this->_index].add(this->_index);
	this->_index = (this->_index + 1) % 8;
	if (this->_nbContact < 8)
		this->_nbContact++;
	return ;
}


void	PhoneBook::search(void)
{
	std::string	line;

	for (int i = 0; i < this->_nbContact; i++)
		this->_tab[i].print();
	std::cout << "please enter a valid index to learn more: ";
	std::getline(std::cin, line);
	if (line.size() == 1 && line[0] >= '0' && line[0] <= '7'
			&& line[0] - '0' < this->_nbContact)
		this->_tab[line[0] - '0'].printAll();
	else
		std::cout << "invalid index" << std::endl;
	return ;
}
