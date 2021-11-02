/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:30:44 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/02 16:31:17 by anclarma         ###   ########.fr       */
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
	int	i;

	i = 0;
	(void)level;
	while (i < 4 && level.compare(_levels[i]) != 0)
		i++;
	if (i < 4)
		(this->*_f[i])();
	else
		std::cout
			<< "Are you so bad you can't ask for an inteligible level ?!"
			<< std::endl;
	return ;
}

void	Karen::debug(void) const
{
	std::cout
		<< "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!"
		<< std::endl;
}

void	Karen::info(void) const
{
	std::cout
		<< "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning(void) const
{
	std::cout
		<< "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started working "
		<< "here last month."
		<< std::endl;
}

void	Karen::error(void) const
{
	std::cout
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
