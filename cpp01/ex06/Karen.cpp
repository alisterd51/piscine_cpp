/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:30:44 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/02 17:52:01 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

Karen::Karen()
{
	this->_f[0] = &Karen::debug;
	this->_f[1] = &Karen::info;
	this->_f[2] = &Karen::warning;
	this->_f[3] = &Karen::error;
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
	return ;
}

Karen::~Karen()
{
	return ;
}

void	Karen::complain(std::string level)
{
	const int	lv = get_level(level);

	if (lv < 4)
		(this->*_f[lv])();
	else
		std::cout
			<< "[ Probably complaining about insignificant problems ]"
			<< std::endl
			<< std::endl;
	return ;
}

int	Karen::get_level(std::string level)
{
	int	lv;

	lv = 0;
	while (lv < 4 && level.compare(_levels[lv]) != 0)
		lv++;
	return (lv);
}

void	Karen::debug(void) const
{
	std::cout
		<< "[ DEBUG ]"
		<< std::endl
		<< "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< std::endl
		<< "I just love it!"
		<< std::endl
		<< std::endl;
}

void	Karen::info(void) const
{
	std::cout
		<< "[ INFO ]"
		<< std::endl
		<< "I cannot believe adding extra bacon cost more money."
		<< std::endl
		<< "You don’t put enough!"
		<< std::endl
		<< "If you did I would not have to ask for it!"
		<< std::endl
		<< std::endl;
}

void	Karen::warning(void) const
{
	std::cout
		<< "[ WARNING ]"
		<< std::endl
		<< "I think I deserve to have some extra bacon for free."
		<< std::endl
		<< "I’ve been coming here for years and you just started working "
		<< "here last month."
		<< std::endl
		<< std::endl;
}

void	Karen::error(void) const
{
	std::cout
		<< "[ ERROR ]"
		<< std::endl
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl
		<< std::endl;
}
