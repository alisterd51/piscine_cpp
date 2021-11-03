/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 01:24:20 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/03 14:54:28 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) :
	_value(0)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const &i)
{
	std::cout
		<< "Int constructor called"
		<< std::endl;
	this->_value = i << this->_fractional_bits;
	return ;
}

Fixed::Fixed(float const &f)
{
	std::cout
		<< "Float constructor called"
		<< std::endl;
	this->_value = roundf(f * (1 << this->_fractional_bits));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout
		<< "Assignation operator called"
		<< std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout
		<< "getRawBits member function called"
		<< std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout
		<< "setRawBits member function called"
		<< std::endl;
	this->_value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_fractional_bits);
}

const int	Fixed::_fractional_bits = 8;

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}
