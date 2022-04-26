/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:19:48 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/11 07:34:31 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

Contact::Contact(void) :
	_index(0)
{
	return ;
}

Contact::Contact(Contact const &src)
{
	*this = src;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

Contact	&Contact::operator=(Contact const &rhs)
{
	if (this != &rhs)
	{
		this->_index = rhs._index;
		this->_firstName = rhs._firstName;
		this->_lastName = rhs._lastName;
		this->_nickname = rhs._nickname;
		this->_phoneNumber = rhs._phoneNumber;
		this->_darkestSecret = rhs._darkestSecret;
	}
	return (*this);
}

void	Contact::add(int index)
{
	this->_index = index;
	this->_firstName = getValidValue("Pease enter your first name: ");
	this->_lastName = getValidValue("Pease enter your last name: ");
	this->_nickname = getValidValue("Pease enter your nickname: ");
	this->_phoneNumber = getValidValue("Pease enter your phone number: ");
	this->_darkestSecret = getValidValue("Pease enter your darkest secret: ");
	std::cout << "Thanks" << std::endl;
	return ;
}

void	Contact::print(void)
{
	std::cout
		<< "|" << std::setw(10) << this->_index
		<< "|" << std::setw(10) << printMax(this->_firstName, 10)
		<< "|" << std::setw(10) << printMax(this->_lastName, 10)
		<< "|" << std::setw(10) << printMax(this->_nickname, 10)
		<< "|" << std::endl;
}

void	Contact::printAll(void) const
{
	std::cout
		<< "first name: " << this->_firstName << std::endl
		<< "last name: " << this->_lastName << std::endl
		<< "nickname: " << this->_nickname << std::endl
		<< "phone number: " << this->_phoneNumber << std::endl
		<< "darkest secret: " << this->_darkestSecret << std::endl;
}

std::string	Contact::printMax(std::string str, std::size_t width)
{
	if (str.size() <= 10)
		return (str.substr(0, width));
	else
		return (str.substr(0, width - 1) + ".");
}

std::string	Contact::getValidValue(std::string question)
{
	std::string	line;
	do
	{
		if (std::cin.eof())
			break ;
		std::cout << question;
		std::getline(std::cin, line);
		if (line.size() == 0)
			std::cout << "Error: size invalid" << std::endl;
	}
	while (line.size() == 0);
	return (line);
}
